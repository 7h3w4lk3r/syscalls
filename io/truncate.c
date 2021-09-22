#include <unistd.h>
#include <stdio.h>

// truncate the size of file to 45 bytes. 

int main()
{
int ret;
ret = truncate ("test.txt", 45);
if (ret == -1) {
	perror("truncate");
	return -1;}
return 0;
}
