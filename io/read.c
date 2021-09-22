#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int fd, sz;
    char *c = (char *) calloc(100, sizeof(char));	// allocate spacce for 100 chars
    fd = open("test.txt", O_RDONLY);		// open read-only
    if (fd < 0) { perror("r1"); exit(1); }
    sz = read(fd, c, 10);			// read 10 bytes, store in 'c'
    printf("called read(% d, c, 10).  returned that %d bytes  were read.\n", fd, sz);
    c[sz] = '\0';	// set last element to null terminator for printing
    printf("Those bytes are as follows: %s\n", c);

return 0;
}
