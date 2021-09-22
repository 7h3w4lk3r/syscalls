#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(){

// identical to: fd = open (filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);

int fd = creat("test.txt",0644);

if(fd==-1) perror("create");
}
