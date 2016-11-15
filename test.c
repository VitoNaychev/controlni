#include<stdio.h>

int main(){
    char b[34], c[68];
    int lenghtC, lenghtB;
    fgets(c, 34, stdin);
    fgets(b, 34, stdin);
    for(int i = 0 ; ; i++){
        if(c[i] == '\0'){ 
            lenghtC = i;
            break;
        }
    }

    for(int i = 0 ; ; i++){
        if(b[i] == '\0'){ 
            lenghtB = i;
            break;
        }
    }
    for(int i = lenghtC - 1, j = 0; j < lenghtB ; i++, j++){
        c[i] = b[j];
    }
    printf("%s", c);
    return 0;
}
