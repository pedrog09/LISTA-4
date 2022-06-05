#include <stdio.h>

int main(){

    int a, b;
    int *pa = NULL, *pb = NULL;

    pa = &a;
    pb = &b;


    while(a != b)
    {

        printf("Digite o primeiro numero:");
        scanf("%d", pa);
        printf("Digite o segundo numero:");
        scanf("%d", pb);

        if (a > b)
        {
            printf("O maior número é: %d \n", *pa);
            continue;
        }
        else if(b > a)
        {
            printf("O maior número é: %d \n", *pb);
            continue;
        }
        else{
            break;
        }
    }
    
}