/* Algoritmo para ordenar Arrays*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main() {

    int numeros[TAM], i, aux, cont;

    printf("Preencha o Array: \n");

    for(i = 0; i < TAM; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("O Array digitado: ");

    for(i = 0; i < TAM; i++){
        printf("%4d", numeros[i]);
    }

    //Algoritmo de  Bubblesort:
    for (cont = 1; cont < TAM; cont++) {
        for (i = 0; i < TAM - 1; i++) {
            if(numeros[i] > numeros[i + 1]) {
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }

    printf("\nValores do Array organizados: ");
    for (i = 0; i < 10; i++) {
        printf("%4d", numeros[i]);
    }

return 0;
}
