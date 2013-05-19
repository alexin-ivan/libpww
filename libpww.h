/*
    libpww — POSIX threads workers wrapper
    © 2012–2013, Oleksandr Natalenko aka post-factum <oleksandr@natalenko.name>

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

typedef void (*handler_t)(void *);

typedef struct worker_data
{
	pthread_t thread_id;
	pthread_mutex_t mutex;
	pthread_cond_t cond;
	int ret_val, ready, exit;
	void *opdata;
	handler_t handler;
} worker_data_t;

worker_data_t *pww_start_worker(void);
void pww_submit_task(worker_data_t *t, void *opdata, handler_t handler);
void pww_join_task(worker_data_t *t);
void pww_exit_task(worker_data_t *t);

