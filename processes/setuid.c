// Sets the real, effective, or saved set user IDs (UIDs) for the current process to uid

#define _POSIX_SOURCE
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

main() {
  printf("prior to setuid(), uid=%d, effective uid=%d\n",
         (int) getuid(), (int) geteuid());
  if (setuid(25) != 0)
    perror("setuid() error");
  else
    printf("after setuid(),    uid=%d, effective uid=%d\n",
           (int) getuid(), (int) geteuid());
}

