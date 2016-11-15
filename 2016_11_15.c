#include<stdio.h>

int main(){
    char a[34], b[68]; //suzdavame dvata masiva 'a' i 'b'
    int lenghtA, lenghtB;
    fgets(a, 34, stdin);//vuvejdame 'a'
    fgets(b, 34, stdin);//vuvejdame 'b'
    //note: fgets() vzima i nov red i go dobavq v masiva
    for(int i = 0 ; ; i++){
        if(a[i] == '\0'){  //namirame duljinata na masiva 'a'
            lenghtA = --i; //vadim ot duljinata 1(po tozi na4in ignorirame terminira6tata nula)
            break;
        }
    }

    for(int i = 0 ; ; i++){
        if(b[i] == '\0'){  //namirame diljinata na masiva 'b'
            lenghtB = i;
            break;
        }
    }
    for(int i = 0; i < lenghtB ; i++){ //zapo4vame da dobavqme v kraq na 'a' simvolite ot 'b'
        a[i + lenghtA] = b[i];
    }
    printf("%s", a);
    return 0;
}
