#include<stdio.h>
#include<stdlib.h>

int main()
{
 int result=putenv("NAME=TEST");

 if(result==0)
 {
  printf("\n environmental variable successfully written");
 printf("\n value of the environmental variable written is %s",getenv("NAME"));

 }else{
  printf("\n error in writing the environmental variable");
 }

 
 return 0;
}
