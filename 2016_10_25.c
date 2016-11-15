#include<stdio.h>

int main(){
    char letter;
    int interval;
    printf("Enter letter: ");
    scanf("%c", &letter);
    printf("Enter interval: ");
    scanf("%d", &interval);
    for(; letter <= 'z' && letter >= 'a'; letter += interval) printf("%c\n", letter);
    
    return 0;
}
