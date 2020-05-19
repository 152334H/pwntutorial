#include <stdio.h>
void contrived_code() { //my friend told me to add this!
    asm("xor rax,rax; add rax, 59; ret;");
    asm("pop rdi; pop rsi; pop rdx; ret;");
    asm("syscall; ret;");
}
int main(){
    int v = 1;
    char s[8];
    printf("Type something at %llx: ", s);
    gets(s);
    printf("You put: %s", s);
}
