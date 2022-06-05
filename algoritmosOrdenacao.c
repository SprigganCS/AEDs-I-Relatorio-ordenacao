#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *v){
  int aux;
  for (int i = 9; i > 0; i--)
    for (int j = 0; j < i; j++)
      if (v[j] > v[j+1]) {
        aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
      }
}

void insertionsort(int *v){
  int aux, j;
  for (int i = 1; i < 10; i++){
    aux = v[i];
    j = i - 1;
    while (j >= 0 && v[j] > aux){
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = aux;
  }
}

void selectionsort(int *v){
  int aux, j, min;
  for (int i = 0; i < 10; i++){
    min = i;
    aux = v[i];
    for (int j = i+1; j < 10; j++)
      if (v[j] < aux) {
        aux = v[j];
        min = j;
      }
    v[min] = v[i];
    v[i] = aux;
  }
}

void imprimevetor(int *v){
  for (int i = 0; i < 10; i++)
    printf(" %d ", v[i]);
  printf("\n");
}

void main(){

  printf("\n Métodos de Ordenação.\n\n");

  int vb0[10] = {0,1,2,3,4,5,6,7,8,9}; // Vetor ordenado.
  int vb1[10] = {5,8,2,0,6,9,1,4,3,7}; // Vetor desordenado.
  int vb2[10] = {9,8,7,6,5,4,3,2,1,0}; // Vetor em ordem inversa.

  printf(" Bubble Sort, vetor ordenado:\n");
  imprimevetor(vb0);
  bubblesort(vb0);
  imprimevetor(vb0);

  printf(" Bubble Sort, vetor desordenado:\n");
  imprimevetor(vb1);
  bubblesort(vb1);
  imprimevetor(vb1);

  printf(" Bubble Sort, vetor em ordem inversa:\n");
  imprimevetor(vb2);
  bubblesort(vb2);
  imprimevetor(vb2);

  printf("\n");

  int vi0[10] = {0,1,2,3,4,5,6,7,8,9}; // Vetor ordenado.
  int vi1[10] = {5,8,2,0,6,9,1,4,3,7}; // Vetor desordenado.
  int vi2[10] = {9,8,7,6,5,4,3,2,1,0}; // Vetor em ordem inversa.

  printf(" Insertion Sort, vetor ordenado:\n");
  imprimevetor(vi0);
  insertionsort(vi0);
  imprimevetor(vi0);

  printf(" Insertion Sort, vetor desordenado:\n");
  imprimevetor(vi1);
  insertionsort(vi1);
  imprimevetor(vi1);

  printf(" Insertion Sort, vetor em ordem inversa:\n");
  imprimevetor(vi2);
  insertionsort(vi2);
  imprimevetor(vi2);

  printf("\n");

  int vs0[10] = {0,1,2,3,4,5,6,7,8,9}; // Vetor ordenado.
  int vs1[10] = {5,8,2,0,6,9,1,4,3,7}; // Vetor desordenado.
  int vs2[10] = {9,8,7,6,5,4,3,2,1,0}; // Vetor em ordem inversa.

  printf(" Selection Sort, vetor ordenado:\n");
  imprimevetor(vs0);
  selectionsort(vs0);
  imprimevetor(vs0);

  printf(" Selection Sort, vetor desordenado:\n");
  imprimevetor(vs1);
  selectionsort(vs1);
  imprimevetor(vs1);

  printf(" Selection Sort, vetor em ordem inversa:\n");
  imprimevetor(vs2);
  selectionsort(vs2);
  imprimevetor(vs2);

  printf("\n");
}

