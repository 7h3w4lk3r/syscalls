
// show info for user data
// change the username to whatever you want

#define _POSIX_SOURCE
#include <sys/types.h>
#include <stdio.h>
#include <pwd.h>

int main() {
  struct passwd *p;
  char user[]="root";

  if ((p = getpwnam(user)) == NULL)
    perror("getpwnam() error");
  else {
    printf("getpwnam() returned the following info for user %s:\n",
           user);
    printf("  pw_name  : %s\n",       p->pw_name);
    printf("  pw_uid   : %d\n", (int) p->pw_uid);
    printf("  pw_gid   : %d\n", (int) p->pw_gid);
    printf("  pw_dir   : %s\n",       p->pw_dir);
    printf("  pw_shell : %s\n",       p->pw_shell);
  }
	return 0;
}

