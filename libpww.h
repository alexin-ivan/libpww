/*
    libpww - POSIX threads workers wrapper
    (C) 2012, Oleksandr Natalenko aka post-factum <pfactum@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

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

void start_worker(worker_data_t *t);
void submit_task(worker_data_t *t, void *opdata, void *handler);
void join_task(worker_data_t *t);
