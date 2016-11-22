#include<stdio.h>
#include<string.h>

int main(){
    char text[42] = {0};
    scanf("%s", text);

    while(strcmp(text, "PanGalacticGargleBlaster")){
        for(int i = 0 ; i < strlen(text) ; i++)
            text[i] -= 'a' - 'A';

        printf("%s\n", text);
        scanf("%s", text);
    } 
    return 0;
}
