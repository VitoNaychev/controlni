#include<stdio.h>

int main(){
    char b[34], c[68];
    int lenghtC, lenghtB;
    fgets(c, 34, stdin);
    fgets(b, 34, stdin);
    for(int i = 0 ; ; i++){
        if(c[i] == '\0'){ 
            lenghtC = --i;
            break;
        }
    }

    for(int i = 0 ; ; i++){
        if(b[i] == '\0'){ 
            lenghtB = i;
            break;
        }
    }
    for(int i = 0; i < lenghtB ; i++){
        c[i + lenghtC] = b[i];
    }
    printf("%s", c);
    return 0;
}
