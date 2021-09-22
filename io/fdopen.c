#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *stream;
int fd;
fd = open ("test.txt", O_RDONLY);
if (fd == -1)
/* error */
stream = fdopen (fd, "r");
if (!stream)
/* error */

return 0;
}
