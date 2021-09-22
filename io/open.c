#include <stdio.h>
#include <fcntl.h>

/*
/	access modes:
/	O_RDONLY	read-only
/	O_WRONLY	write-only
/	0_RDWR		read-write
/	O_CREAT		create file
/	O_APPEND	append to file
/	O_TRUNC		truncating file to zero bytes
/
/	permission modes:
/	bit-stype permissions, i.e: 644,777,600
/	arguments, i.e: S_IWUSR, S_IRWXU, S_IXUSR
/
*/

int main(){


fd = open("myfile", O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

if (fd == -1) perror("open");


}
