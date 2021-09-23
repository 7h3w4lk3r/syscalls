// show info for user data
// change username

#define _POSIX_SOURCE
#include <sys/types.h>
#include <pwd.h>
#include <stdio.h>

void main() {
  struct passwd *p;
  uid_t  uid=0;

  if ((p = getpwuid(uid)) == NULL)
    perror("getpwuid() error");
  else {
    printf("getpwuid() returned the following info for uid %d:\n",
           (int) uid);
    printf("  pw_name  : %s\n",       p->pw_name);
    printf("  pw_uid   : %d\n", (int) p->pw_uid);
    printf("  pw_gid   : %d\n", (int) p->pw_gid);
    printf("  pw_dir   : %s\n",       p->pw_dir);
    printf("  pw_shell : %s\n",       p->pw_shell);
  }
}



