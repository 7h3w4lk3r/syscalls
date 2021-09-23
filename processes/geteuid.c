// show current process user ID info

#define _POSIX_SOURCE
#include <sys/types.h>
#include <pwd.h>
#include <unistd.h>

main() {
  struct passwd *p;
  uid_t  uid;

  if ((p = getpwuid(uid = geteuid())) == NULL)
    perror("getpwuid() error");
  else {
    puts("getpwuid() returned the following info for your userid:");
    printf("  pw_name  : %s\n",       p->pw_name);
    printf("  pw_uid   : %d\n", (int) p->pw_uid);
    printf("  pw_gid   : %d\n", (int) p->pw_gid);
    printf("  pw_dir   : %s\n",       p->pw_dir);
    printf("  pw_shell : %s\n",       p->pw_shell);
  }
}

