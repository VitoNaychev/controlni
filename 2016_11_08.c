#include<stdio.h>

int main(){
    char c;
    scanf("%c", &c);
    while(c >= 'A' && c <= 'Z'){
        //c += (c % 5) % 2 == 0 ? c % 5 : -(c % 2);
        if(c % 5 == 0){
            break;
        }else if((c % 5) % 2 == 0){
            int ostatuk = c % 5;
            c += ostatuk;
        }else{
            int ostatuk = c % 5;
            c -= ostatuk; 
        }
        if(c >= 'A' && c <= 'Z')
            printf("%c\n", c);
    }
    return 0;
}
