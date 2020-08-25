//usr/bin/gcc -fno-stack-protector -zexecstack ret2shell.c -o ret2shell.o; exit
#include <stdio.h>
#include <stdlib.h>
int main(){
    int v = 1;
    char s[8];
    printf("Type something at %llx: ", s);
    gets(s);
    printf("You put: %s", s);
}
