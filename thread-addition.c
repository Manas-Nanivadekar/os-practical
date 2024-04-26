// Write a program to create a thread to add two numbers.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
void *thread_function(void *arg);
int num[2] = {3, 5};
int main()
{
    pthread_t a_thread; // thread declaration
    void *result;
    pthread_create(&a_thread, NULL, thread_function, (void *)num);
    // thread is created
    pthread_join(a_thread, &result);
    printf("Inside main process\n");
    printf("Thread returned:%s\n", (char *)result);
}
void *thread_function(void *arg)
{
    printf("Inside thread\n");
    int *x = arg;
    int sum = x[0] + x[1];
    printf("sum is %d\n", sum);
    pthread_exit("sum calculated");
}