#include<stdio.h>
#include<stdlib.h>

int main(){

printf("HOME : %s\n", getenv("HOME"));

// if the overwrite value is set to 0 and the env name exists, the function wont change the value
// setting overwrite value to 1 will force the function to reset

int result=setenv("HOME","test",1);

if(result==0){
	 printf("env set successfully.\n");
	printf("HOME : %s\n", getenv("HOME"));}
else
	perror("env");



 return 0;
}

