// show the members of a group
// change group name

#define _POSIX_SOURCE
#include <sys/types.h>
#include <grp.h>
#include <stdio.h>

main() {
  struct group *grp;
  char   grpname[]="root", **curr;

  if ((grp = getgrnam(grpname)) == NULL)
    perror("getgrnam() error");
  else {
    printf("The following are members of group %s:\n", grpname);
    for (curr=grp->gr_mem; (*curr) != NULL; curr++)
      printf("  %s\n", *curr);
  }
}
