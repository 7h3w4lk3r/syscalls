
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(){

int fd = open("test", O_RDONLY);

if(fd == -1){perror("error"); exit(1);}

char *rd = (char*)calloc(10,sizeof(char));

int bn = read(fd, rd, 10);

printf("%s\n",rd);

off_t ret;
ret = lseek(fd, (off_t)10, SEEK_SET);		// change file offset/pointer to 10 bytes from start

printf("\nfile descriptor value set to %d by lseek()\n",ret);

bn = read(fd, rd, 10);
printf("reading again: %s\n",rd);
