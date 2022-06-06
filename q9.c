#include<stdio.h>
#include<string.h>


int main(){

    void bolha(char *letras,int total);
    char L[100];

    printf("Digite letras aleatorias:\n");
    gets(L);

    bolha(L,strlen(L));

    printf("Letras ordenadas em ordem alfabetica: %s", L);

    return 0;
}


void bolha(char *digitado,int T){
    int v1, v2;
    char x;

    for(v1 = 0; v1 < T; v1++){
        for(v2 = T - 1;v2 >= v1 ;v2--){
            if(digitado[v2-1] > digitado[v2]){
                x = digitado[v2-1];
                digitado[v2-1] = digitado[v2];
                digitado[v2] = x;
            }
        }
    }
}