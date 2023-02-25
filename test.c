#include <stdio.h>


int main(){
    char s[10];
    scanf("%s", s2);

    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);

    char t;
    t=s[b-1];
    s[b-1]=s[a-1];

    s[a-1]=t;

    printf("%s\n", s);
}