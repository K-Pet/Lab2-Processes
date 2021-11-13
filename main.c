#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>

#define   MAX_COUNT  200
#define   BUF_SIZE   100
//Credit to: Shail Pokharel

void  main(void)
{
     pid_t  pid;
     int    i;
     char   buf[BUF_SIZE];

     pid = fork();

     for (i = 1; i <= MAX_COUNT; i++) 
     {
       if(pid > 0)
       {
         sprintf(buf, "This line is from  the parent pid %d, value = %d\n", getpid(), i);  
       }
       
       else if(pid == 0)
       {
         sprintf(buf, "This line is from the child pid %d, value = %d\n", getpid(), i);  
       }
         write(1, buf, strlen(buf));  
     } 
}