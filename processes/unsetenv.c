#include <stdlib.h>
#include <stdio.h>


int main(){

int result = unsetenv("HOME");

if(result == 0){
	printf("env uset successfully\n");
	printf("HOME : %s\n",getenv("HOME"));
}

else
	perror("env");

return 0;}
