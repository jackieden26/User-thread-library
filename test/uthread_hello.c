#include <stdio.h>
#include <stdlib.h>
#include <uthread.h>

/*
 * Simple hello world test.
 * Tests the creation of a single thread and its successful return.
 */
int hello(void* arg)
{
	printf("Hello world!\n");
	return 0;
}

int main(void)
{
	uthread_t tid;

	tid = uthread_create(hello, NULL);
	uthread_join(tid, NULL);
	printf("end of main\n");
	return 0;
}
