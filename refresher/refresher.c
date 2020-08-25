//usr/bin/gcc -fno-stack-protector refresher.c -o refresher.o; exit
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#define get_exec_stack()  
#define get_rdx_value(v) asm("\t mov %%rdx,%0" : "=r"(v));
char *setup_shellcode_section(){
    /* !!! You can ignore this function. !!! */
    char *p = mmap(0,4096,PROT_READ|PROT_WRITE|PROT_EXEC,MAP_PRIVATE|MAP_ANON,-1,0); //needed to enable execution for a small part of memory.
    memset(p, 0xc3, 4096); //fill with NOPs
    return p;
}
void you_failed(char *msg, int level){
    puts(msg);
    exit(level);
}
//challenge 2: ROP
void extra() { asm("pop %rdx; syscall; ret;"); }
void challenge_two() {
    long long num = 0;
    puts("Let's have fun with syscalls! Can you get to /bin/sh");
    printf("give a number: ");
    read(0, &num, 100);
    num = atoi(&num);
}
//challenge 1: shellcode
void challenge_one(){
    long long reg = 0;
    char *exec_stack = setup_shellcode_section();
    //run a shellcode input of max length 6
    puts("Will this one stump you?");
    read(0, exec_stack, 6);
    ((void(*)(void))exec_stack)(); //execute shellcode
    //the shellcode must set rdx = 0x12345678
    get_rdx_value(reg); // reg = rdx
    if (reg == 0x12345678) {
        char flag[200];
        FILE *f = fopen("flag1.txt", "r");
        fgets(flag, 100, f);
        puts("You get a flag for all your troubles:");
        puts(flag);
    } else
        you_failed(":(((", 3);
}
void sanity_check(){
    char s[8];
    int v = 0xaaaa;
    puts("Can you get through this sanity check?");
    read(0, s, 13);
    if (v == 0x73737373) {
        printf("How about this? [%llx]\n", challenge_one);
        read(0, s, 30);
    } else
        you_failed(":(", 1);
}
int main() {
    sanity_check();
    you_failed(":((", 2);
}
