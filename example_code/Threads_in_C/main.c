#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h> // sleep
#include <pthread.h>

typedef struct _thread_message_t{
    char *s;            // string message to be printed in thread
    int print_count;    // how many times to print the message in the thread  
} thread_message_t;

static void *_print_func(void *ctx){
    thread_message_t *m = (thread_message_t *)ctx;

    for (int i = 0; i < m->print_count; i++){
        printf("%s\n", m->s);
    }
    
}

int main(){
    int ret1, ret2;
    pthread_t thread1, thread2;
    thread_message_t m1, m2;
    
    m1.s = "Hello World!";
    m1.print_count = 30;
    m2.s = "THREAAADDSS!";
    m2.print_count = 50;

    ret1 = pthread_create( &thread1, NULL, _print_func, (void *) &m1);
    ret2 = pthread_create( &thread2, NULL, _print_func, (void *) &m2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    

    return 0;
}