#include <iostream>
#include <pthread.h>
#include <errno.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

void PrintError(char* msg, int status, char* fileName, int lineNumber){
		cout << msg << ' ' << fileName << ":" << lineNumber
				<< "- " << strerror(status) << endl<< endl;
}

void* simpleThread(void* myID){
		cout << "Thread  " << (long) myID << " is running" << endl<< endl;
		return NULL; //same as pthread_exit(NULL)
}

int main(int argc, char** argv){
		pthread_t threadArray[2]; //array of thread IDs
		int status;
		pthread_attr_t threadAttribute;
		status = pthread_attr_init(&threadAttribute); //initialize attribute obj
		
		if(status !=0){
				PrintError("pthread_attr_init failed at ", status, __FILE__,__LINE__);
				exit(status);
		}

	//set the scheduling scope attribute
	status = pthread_attr_setscope(&threadAttribute, PTHREAD_SCOPE_SYSTEM);
	if(status !=0){
			PrintError("pthread_attr_setscope failed at ", status, __FILE__,__LINE__);
      exit(status);
	}

// create two threads and store their IDs in array threadArray
status = pthread_create(&threadArray[0], &threadAttribute, simpleThread, (void*)1L);
if(status !=0){
		PrintError("pthread_create failed @ ", status, __FILE__, __LINE__);
		exit(status);
}

// create second thread
status = pthread_create(&threadArray[1], &threadAttribute, simpleThread,(void*)2L);
if(status !=0){
		PrintError("pthread_create failed @ ", status, __FILE__, __LINE__);
		exit(status);
}

status = pthread_attr_destroy(&threadAttribute); // destroy the attribute object
if(status != 0){ PrintError("pthread_attr_destroy failed at", status, __FILE__,
				__LINE__); exit(status);
}

status = pthread_join(threadArray[0],NULL); // wait for threads to finish
if(status != 0){ PrintError("pthread_join failed at", status, __FILE__,
				__LINE__); exit(status);
}

status = pthread_attr_init(&threadAttribute); // initialize attribute object
status = pthread_join(threadArray[1],NULL);
if(status != 0){ PrintError("pthread_join failed at", status, __FILE__,
				__LINE__); exit(status);}

			return 0; }
