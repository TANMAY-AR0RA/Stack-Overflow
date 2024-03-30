#include <string.h>
#include "shellcode.h"

int
main(void)
{
    unsigned char shell[200];
    strcpy(shell, shellcode);
    void (*code)() = (void *)shell;
    //printf("Shellcode length: %d\n", strlen(shellcode));
    code();
    return 0;
} 
