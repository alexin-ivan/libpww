#include <pthread.h>

struct worker_data
{
	pthread_t thread_id;
	pthread_mutex_t mutex;
	pthread_cond_t cond;
	int ret_val, ready;
	void *opdata;
	void (*handler)(void *);
};

typedef struct worker_data worker_data_t;

void start_worker(worker_data_t *t, void *opdata, void *handler);
void submit_task(worker_data_t *t);
void join_task(worker_data_t *t);
void *worker(void *data);
