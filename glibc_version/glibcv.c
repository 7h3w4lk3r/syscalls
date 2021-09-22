#include <stdio.h>
#include <gnu/libc-version.h>

const char *gnu_get_libc_version(void);

int main(){
    printf("%s\n",gnu_get_libc_version());

}
