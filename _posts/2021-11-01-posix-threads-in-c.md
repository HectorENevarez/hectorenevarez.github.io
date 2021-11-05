---
title: "An Introduction to Threads in C/C++"
last_modified_at: 2021-03-01T16:20:02-05:00
classes: wide
mathjax: true

excerpt: TODO 
tagline: "TODO"

header:
  teaser: "/../assets/images/artificial-neural-network-3501528_1920.png"

tags:
  - multithreading
  - C/C++
  - POSIX
  - Programming
---

Currently a work in progress

Threads are an important concept for any developer to understand. In this pos we will be going over POSIX threads and how to implement them into your code. This quick tutorial is meant for intermediate C/C++ developers who are curious to learn about threads.

**Let's get started!**
{: .text-center}

## What is POSIX Thread
The POSIX thread ```(PTHREAD)``` library defines a set of functions and types that standarizes the use of threads on UNIX environments. Pthreads are used to create threads which can run concurrently with other threads in a single process. This allow you, as a developer, to create programs which carry out different tasks concurrently.

## Implementing Pthreads in C/C++
The following section will include code, from a simple project that implements pthreads, that can be found [here](https://github.com/HectorENevarez/hectorenevarez.github.io/tree/master/example_code/Threads_in_C).

Pthreads are easy to implement in C/C++, it only requires the inclusion of the ```pthread library (libpthread)```. In order to do so, we must link to this library in two places:
- [Makefile](https://github.com/HectorENevarez/hectorenevarez.github.io/blob/master/example_code/Threads_in_C/Makefile#L4): Make sure to link your program against ```-lpthread```
- [C/C++ program](https://github.com/HectorENevarez/hectorenevarez.github.io/blob/master/example_code/Threads_in_C/main.c#L5): Include the ```<pthread.h>``` header

Once you're linking against the pthread dependency, we can go ahead and get started. 

For this tutorial, we will be implementing a simple program that creates two threads. Each thread will pass information into a function that will print a message. These two threads will be running concurrently. We will then join the threads and gracefully exit out program. To summarize we will follow 3 major steps:
1. initialize the thread
2. Create the thread
3. Join the thread

## Initialization
We begin in our main function and will utilize our first pthread type; ```pthread_t```. This type is a thread identifier which is used to manage a thread. Like any other variable in C, we first provide the type and then the variable name:
```C
pthread_t thread1, thread2;
```
Here we defined to pthread types, thread1 and thread2. Each will be used to manage their own respective thread. Furthermore, for context of this program, we will also create our own struct that will be used to pass in data to a thread.
```C
typedef struct _thread_message_t{
    char *s;            // string message to be printed in thread
    int print_count;    // how many times to print the message in the thread  
} thread_message_t;
```

This then allows us to declare and fill out a struct for each thread we will be creating:
```C
m1.s = "Hello World!";
m1.print_count = 30;
m2.s = "THREAAADDSS!";
m2.print_count = 50;
```

The creation of these structs is not necessary for thread creation however when we create a thread, we will be able to pass in data to our thread. More on this to come.

## Creation
For this section we will have to first define a function for our thread to start in.
```C
static void *_print_func(void *ctx){
    thread_message_t *m = (thread_message_t *)ctx;

    for (int i = 0; i < m->print_count; i++){
        printf("%s\n", m->s);
    }
    
}
```

This is a simple function that prints out a string x amount of times. There are a couple things that should stand out in the header of this function, let's break it down.

```C
void *x_func(void *x)
```

Pthread thread function declarations require the syntax above. The return type must be a void *. The function name typically is a short description of the function followed by _func. The argument must be of type void *.

> The x in the function header shown above implies that the user can insert a name of their liking. The rest is either required or traditional syntax

Now that we have initialized our pthread start routine, we can now create our thread. We do so with the ```pthread_create``` function. This function takes 4 parameters:
1. pthread_t* : This is a pointer to a variable of type pthread_t
2. pthread_attr_t* : This is a pointer to a struct used to define thread attributes. For this tutorial we won't be using this and setting defualt attributes by passing in NULL
3. start_routine : This is a pointer to a subroutine. This is the function where our thread will execute
4. arg : void* to an argument we will pass to our start routine.

Let's create two seperate threads:
```C
pthread_create( &thread1, NULL, _print_func, (void *) &m1);
pthread_create( &thread2, NULL, _print_func, (void *) &m2);
```

Here we are using ```pthread_create``` in order to create and start our threads. As soon as this function is called, the threads have now started!

# Joining
Finally, now that are threads are in full effect, we can call the ```pthread_join``` function in order to wait for our threads to terminate:
```C
pthread_join(thread1, NULL);
pthread_join(thread2, NULL);
```
