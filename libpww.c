#include "libpww.h"

void start_worker(worker_data_t *t, void *opdata, void *handler)
{
	pthread_mutex_init(&t->mutex, NULL);
	pthread_cond_init(&t->cond, NULL);
	t->ready = 0;
	t->ret_val = pthread_create(&t->thread_id, NULL, worker, t);
	t->opdata = opdata;
	t->handler = handler;
}

void submit_task(worker_data_t *t)
{
	pthread_mutex_lock(&t->mutex);
	t->ready = 1;
	pthread_cond_signal(&t->cond);
	pthread_mutex_unlock(&t->mutex);
}

void join_task(worker_data_t *t)
{
	pthread_mutex_lock(&t->mutex);
	while (t->ready != 0)
		pthread_cond_wait(&t->cond, &t->mutex);
	pthread_mutex_unlock(&t->mutex);
}

void *worker(void *data)
{
	worker_data_t *d = data;
	
	for (;;)
	{
		pthread_mutex_lock(&d->mutex);
		while (d->ready == 0)
			pthread_cond_wait(&d->cond, &d->mutex);
		
		d->handler(d->opdata);

		d->ready = 0;
		pthread_mutex_unlock(&d->mutex);

		pthread_mutex_lock(&d->mutex);
		pthread_cond_signal(&d->cond);
		pthread_mutex_unlock(&d->mutex);
	}
}
