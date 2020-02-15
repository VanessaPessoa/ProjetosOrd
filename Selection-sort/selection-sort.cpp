#include <iostream>
using namespace std;

void troca(int i, int j){
    int temp = i;
    i = j;
    j = temp;
}

void selectionSort (int A[],int n) {
  int i, j, i_min, aux;
  for (i = 0; i < (n- 1); i++) {
    /* O minimo é o primeiro número não ordenado ainda */
    i_min = i;
    for (j = i+1; j < n; j++) {
      /* Caso tenha algum numero menor ele faz a troca do minimo*/
      if (A[j] < A[i_min]) {
        i_min = j;
      }
    }
    /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
    if (i != i_min) {
      aux = A[i];
      A[i] = A[i_min];
      A[i_min] = aux;
    }
  }
}
void printArray(int A[], int n){
    int i;
    for(i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

int main(){
    int A[] = { 20, 12, 15, 3, 1, 32, 10, 40, 100, 35};
    int n = sizeof(A)/ sizeof(A[0]);
 cout << n << endl;
    cout << " Antes do selection sort" << endl;
    printArray(A,n);
    selectionSort(A,n);
    cout<< "Depois do selection sort" << endl;
    printArray(A,n);

    return 0;
}

