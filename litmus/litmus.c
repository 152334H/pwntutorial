//usr/bin/gcc -fno-stack-protector litmus.c -o litmus.o; exit
#include <stdio.h>
#include <stdlib.h>
void get_flag(){ puts(getenv("FLAG")); }
int main(){
    setvbuf(stdin, 0, _IONBF, 0);
    setvbuf(stdout, 0, _IONBF, 0);
    int v = 1;
    char s[8];
    printf("Type something here: ");
    scanf("%s", s);
    if (v == 0x11111111)
	get_flag();
    else
        printf("You put: %s", s);
}
