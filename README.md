# OS-strict-alternation
Strict alternation using c programg 

   Turn Variable or Strict Alternation Approach is the software mechanism implemented at user mode. It is a busy waiting solution which can be implemented only for two processes. In this approach, A turn variable is used which is actually a lock.

   This program works a strict alternation algorithm using a c program. There are two processes called process0 and process1. Each of those programs works reading the value of turn. 
         
            >> if the turn is 0 process0 will enter the critical region.
            >> if the turn is 1 process1 will enter the critical region.
            
            
   .

   This problem is addressed in the turn variable approach. Now, A process can enter in the critical section only in the case when the value of the turn variable equal to the PID of the process. 
   
   The solution provides portability. It is a pure software mechanism implemented at user mode and doesn't need any special 
   instruction from the Operating System.
   
   
   
            
       
            
