<h1>Bubble Sort</h1>

<p> O Bubble Sort é um dos algoritmos de classifição mais
simples e conhecidos na ciência da computação. Este algoritmo foi descrito em um artigo de 1956, pelo matemático e
atuário Edward Harry Friend, intitulado Sorting on electronic computer systems, publicado na terceira edição Journal
of the Association for Computing Machinery. Ele foi descrito
como um ”algoritmo de troca de classificação”. Friend
descreveu os fundamentos do algoritmo.
  
Este importante algorimo e frequentemente utilizado como
uma introdução aos concéitos de algoritmos de ordenação devido à sua simplicidade e facilidade de implementação. Apesar
de sua ineficiência em grandes conjuntos de dados, ele é uma
ferramenta valiosa para entender os princípios básicos de ordenação.</p>


<h2> O projeto</h2>

<h3> Organização de array</h3>
<p> Neste projeto visamos implementar uma aplicação de BubbleSort para organizar um array
de numeros, treinando então conceitos de:</p>
<ol>
  <li> Ordenação de dados</li>
  <li> Manipulação de arrays</li>
  <li> Conceitos de Liguagem C</li>
</ol>

<h3> Requisitos </h3>
<p> Para ser conculida com sucesso a tarefa, foram colocadas especificações para serem seguidas!</p>
<ul>
  <li> Programa em C</li>
  <li> Programa modular</li>
  <li> Itilização de BubbleSort</li>
  <li> Implementação de conceitos passados em sala de aula</li>
</ul>

<h2> O Código</h2>

<p> No exercicio, foi anexado como base um codigo de implementação do BubbleSort
para nós podermos testar e entender como funcionava este algoritmo de ordenação</p>

<h3> Codigo Anexado</h3>

```
#include <stdio.h>

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
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array original: \n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Array ordenado: \n");
    printArray(arr, n);
    return 0;
}

```

<h3> Codigo Final</h3>

```
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
```


<hr>

<h3>Diferença e Melhoria</h3>

<p> Entre os codigos vemos poucas diferenças, o que podemos notar é a mudança que acontece 
no array e no tamanho que sera trabalhado.

  No codigo final foi adicionado um novo metodo chamado _inserir array_ onde deixamos o usuario
definir os numeros e quantos numeros serão trabalhados e organizados no algoritmo de ordenação</p>

```
// inserção de numeros do array
void inserir_nums(int *vetor, int tamanho){
  for(int i=0; i < tamanho; i++){
    printf("insira o valor do vetor na posição %d: ", i);
    scanf("%d", &vetor[i]);
  } 
}
```
