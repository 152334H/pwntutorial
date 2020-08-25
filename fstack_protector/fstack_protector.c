//usr/bin/gcc -fstack-protector-all -pie fstack_protector.c -o fstack_protector; exit
#include <stdio.h>
int main(){
    char s[64];
    printf("The ubiquitous read-no-write service!\n");
    printf("Write something here: ");
    gets(s);
    printf(s);
    printf("\nJust for you, I'll read again: ");
    gets(s);
    printf(s);
}
