// show the root GID and group name

#define _POSIX_SOURCE
#include <sys/types.h>
#include <grp.h>
#include <stdio.h>
#include <sys/stat.h>

main() {
  struct stat info;
  struct group *grp;

  if (stat("/", &info) < 0)
    perror("stat() error");
  else {
    printf("The root is owned by gid %d\n", info.st_gid);
    if ((grp = getgrgid(info.st_gid)) == NULL)
      perror("getgrgid() error");
    else
      printf("This group name is %s\n", grp->gr_name);
  }
}
