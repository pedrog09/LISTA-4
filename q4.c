#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int tam;
    int a[tam];
    int *pa = NULL;
    pa = a;

    printf("Diga o tamanho do seu vetor: \n");
    scanf("%d",&tam);

    int i;
    for(i = 0;i < tam;i++){
        printf("Coloque o %d° numero do vetor: \n", i);
        scanf("%d",&a[tam]);
    }


    for(i = 0; i < tam; i++){
        printf ("Valor [%d] -> Endereco <%p>\n",a[i], pa);
        pa++;
    }
    
}