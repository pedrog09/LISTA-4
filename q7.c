#include <stdio.h>
#include <string.h>

int main(){

    char str1[30];
    char str2[30];

    char *p1 = NULL, *p2 = NULL;

    p1 = &str1;
    p2 = &str2;

    printf("Digite seu primeiro nome: ");
    gets(p1);
    printf("Digite agora seu sobrenome: ");
    gets(p2);

    strcat(*p1, *p2);

    printf("Seu nome completo é: \n %s \n", str1);
    puts(*p1)

    return 0;
}