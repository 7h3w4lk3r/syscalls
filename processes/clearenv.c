#include <stdlib.h>
#include <stdio.h>


int main(){

// clear all environment variables
int result = clearenv();

if(result == 0){
	printf("env cleared successfully\n");}

else
	perror("env");

return 0;}
