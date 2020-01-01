
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/stat.h>
int main(){



key_t key = ftok("f1.txt", 65); // creating key for the shared memory using ftok 
int shmid = shmget(key, 1024, 0666|IPC_CREAT);//geting the shared memory
char *turn = (char*)shmat(shmid, NULL, 0);// attaching the shared memory


   
   

   printf("process 1 is running....\n");
   
  while (1)
  {
   while (strcmp(turn,"1")!=0)
   {
      /* wait */
   }
   
     sleep(1);
     
   printf(". This is process 1 i am in critical region \n");//critical region 

       

   strcpy(turn,"0");// changing the turn value to 0
   
  }
  
  
 


     shmdt(turn); // detaching the shared memory
   
   return 0; 
}


   

