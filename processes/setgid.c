// Sets one or more of the group IDs (GIDs) for the current process to gid

#define _POSIX_SOURCE 1
#include <unistd.h>
#include <stdio.h>

main() {
  printf("your group id is %d\n", (int) getgid());
  if (setgid(500) != 0)
    perror("setgid() error");
  else
    printf("your group id was changed to %d\n",
           (int) getgid());
}

