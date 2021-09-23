// Finds the real group ID (GID) of the calling process

#define _POSIX_SOURCE
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

main() {
  printf("my group id is %d\n", (int) getgid());
}
