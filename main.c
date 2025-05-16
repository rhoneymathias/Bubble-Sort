/******************************************************************************

O programa recebe 10 números do usuário.

Primeiro, o algoritmo Bubble Sort ordena os números em ordem crescente e exibe o vetor ordenado.

Em seguida, o algoritmo Bubble Sort ordena os mesmos números, mas agora em ordem decrescente
e exibe o vetor ordenado dessa forma.

*******************************************************************************/
#include <stdio.h>

void bubbleSortCrescente(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDecrescente(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Troca os elementos
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[10];
    
    // Receber dados do usuário
    for (int i = 0; i < 10; i++) {
        printf("Informe um valor: ");
        scanf("%d", &numeros[i]);
    }
    
    // Ordenar os dados em ordem crescente
    bubbleSortCrescente(numeros, 10);
    
    // Exibir os dados ordenados em ordem crescente
    printf("\nValores ordenados em ordem crescente: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    
    // Ordenar os dados em ordem decrescente
    bubbleSortDecrescente(numeros, 10);
    
    // Exibir os dados ordenados em ordem decrescente
    printf("\nValores ordenados em ordem decrescente: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    return 0;
}


