#include <stdio_ext.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int sz;
    char msg[] = "this is a test";
    int fd = open("test.txt",O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0){perror("R1");exit(1);}
    sz = write(fd, msg, strlen(msg));
    if (sz==-1) perror("write");
    close(fd);
    return 0;
}
