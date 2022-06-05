#include <stdio.h>

int main(){
    int a, b, c;
    int *pa = NULL, *pb = NULL, *pc = NULL;

    pa = &a;
    pb = &b;
    pc = &c

    printf("Entre com o primeiro numero: ");
    scanf("%d", pa);
    printf("Entre com o segundo número:");
    scanf("%d", pb);

    *pc = *pa;
    *pa = *pb;
    *pb = *pc;

    printf("Os valores invertidos ficaram %d e %d", a, b);


}