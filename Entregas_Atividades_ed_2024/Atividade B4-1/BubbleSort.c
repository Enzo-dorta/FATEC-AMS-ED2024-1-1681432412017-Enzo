/*
  Enzo Dorta Setavanto de Brito  15/08/2024
  Prof Carlos Verissimo   Estrutura de Dados
          Bubble Sort de array
*/



#include <stdio.h>
#include <stdlib.h>


// inserção de numeros do array
void inserir_nums(int *vetor, int tamanho){
  for(int i=0; i < tamanho; i++){
    printf("insira o valor do vetor na posição %d: ", i);
    scanf("%d", &vetor[i]);
  } 
}

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Troca os elementos
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
  // definição do array
    int x;
    printf(" insira o tamanho do array: ");
    scanf("%d", &x);
    int arr[x];
    int n = sizeof(arr)/sizeof(arr[0]);

  // chamada das funções
    inserir_nums(arr, n);
  
    printf("Array original: \n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Array ordenado: \n");
    printArray(arr, n);
  
    return 0;
}
