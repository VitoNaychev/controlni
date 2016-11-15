#include<stdio.h>

int main(){
    char c;
    int n;
    scanf("%c", &c);
    scanf("%d", &n);
    for(; c <= 'z'; c += n) printf("%c\n", c);
    
    return 0;
}
