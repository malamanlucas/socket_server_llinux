#include <pthread.h>
#include <cstdlib>

#include <iostream>
#include <string>
#include <sstream>
#include <thread>
#include <string.h>

#include <stdio.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h> 
#include <errno.h> 

#include <netinet/in.h> 
#include <sys/time.h> //FD_SET, FD_ISSET, FD_ZERO macros 


using namespace std;

void* PrintHello(void *arg)
{
  while(true) {
    cout << "dentro da thread " << endl;
    sleep(1);
  }
  pthread_exit(NULL);
}

int main() {

  pthread_t thread;

  pthread_create(&thread, NULL, PrintHello, NULL);

  while(true) {
    cout << "Hell worodl " << endl;
    sleep(1);
  }
  
  pthread_exit(NULL);
  return 0;
}