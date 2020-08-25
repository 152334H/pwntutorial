//usr/bin/gcc -fno-stack-protector -no-pie ret2libc.c -o ret2libc.o; exit
#include <stdio.h>
#include <stdlib.h>
int main(){
    int v = 1;
    char s[8];
    printf("Type something with %llx: ", printf);
    gets(s);
    printf("You put: %s", s);
}
