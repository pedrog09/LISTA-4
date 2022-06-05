#include <stdio.h>

#define TAM 60

int main(){


    char digitado[TAM];
    char *pd = NULL;
    int *pi = NULL;

    pd = digitado;

    printf("Digite algo:");
    fgets(pd, TAM, stdin);

    int i = 0; 
    pi = &i;
    while(digitado[*pi] != '\0'){
        (*pi)++;
    }

    printf("Tamanho: %d\n", *pi);

  return 0;
}