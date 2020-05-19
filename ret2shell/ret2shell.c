#include <stdio.h>
#include <stdlib.h>
int main(){
    int v = 1;
    char s[8];
    printf("Type something at %llx: ", s);
    gets(s);
    printf("You put: %s", s);
}
