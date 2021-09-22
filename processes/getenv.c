#include <stdio.h>
#include <stdlib.h>

// print the value of an environment variable by name

int main () {
   printf("PATH : %s\n", getenv("PATH"));
   printf("HOME : %s\n", getenv("HOME"));
   printf("ROOT : %s\n", getenv("ROOT"));

   return(0);
}
