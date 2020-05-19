#include <stdio.h>
#include <stdlib.h>
void get_flag(){ puts(getenv("FLAG")); }
int main(){
    int v = 1;
    char s[8];
    printf("Type something here: ");
    //scanf("%s", s);
    gets(s);
    printf("You put: %s", s);
}
