#include <unistd.h>
#include <stdio.h>

int main(void){


printf("current process ID : %d\n",getpid());
printf("parent process ID : %d\n",getppid());;

return 0;}
