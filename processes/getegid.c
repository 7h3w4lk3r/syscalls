// finds the group ID

#define _POSIX_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

main() {
  printf("my group id is %d\n", (int) getgid());
}
