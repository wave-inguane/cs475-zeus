#include <iostream>
#include <pthread.h>
#include <errno.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

void PrintError(char* msg, int status, char* fileName, int lineNumber){
		cout << msg << ' ' << fileName << ":" << lineNumber
				<< "- " << strerror(status) << endl;
}

void* simpleThread(void* myID){
		cout << "Thread " << (long) myID << "is running" << endl;
		return NULL; //same as pthread_exit(NULL)
}

int main(int argc, char** argv){
pthread_t threadArray[2]; // array of thread IDs
int status; // error code

pthread_attr_t threadAttribute; // thread attribute
status = pthread_attr_init(&threadAttribute); // initialize the attribute object
if(status != 0){ /* ... */ }

// set the detachstate attribute to detached
 status = pthread_attr_setdetachstate(&threadAttribute,
 PTHREAD_CREATE_DETACHED);
 if(status != 0){ /* ... */ }

 // create two threads in the detached state
 status = pthread_create(&threadArray[0], &threadAttribute, simpleThread,
 (void*) 1L);
 if(status != 0){ /* ... */ }

 status = pthread_create(&threadArray[1], &threadAttribute, simpleThread,
(void*) 2L);
if(status != 0){ /* ... */ }

 // destroy the attribute object when it is no longer needed
 status = pthread_attr_destroy(&threadAttribute);
 if(status != 0){ /* ... */ }
 
 // allow all threads to complete
 pthread_exit(NULL);
 return 0;
}
