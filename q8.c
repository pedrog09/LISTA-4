#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char get[40];
    char a;

    printf("Diga seu nome:\n");
    gets(get);

    printf("Agora diga uma letra:\n");
    scanf("%c", &a);

    int find = 0;
    int tam = strlen(get);
    for (int i = 0; i < tam; i++) {
        if (get[i] == a) {
            printf("A letra pertence ao seu nome.\n");
            find = 1;
        }
    }

    if (!find) {
            printf("A letra indicada não pertence ao seu nome.\n");
            return 0;
        } 
}