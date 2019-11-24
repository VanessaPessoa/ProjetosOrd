#include <stdio.h>

void Troca(int A[], int i, int j){
    int aux;
    aux = A[i];
    A[i] = A[j];
    A[j] = aux;
}

void Heapify(int A[], int i, int tamanho){
    int l = 2*i + 1;
    int r = 2*i + 2;
    int maior = 0;

    if((l <= tamanho) && (A[l] > A[i])){
        maior = l;
    } else{
        maior = i;
    }
    if((r <= tamanho) && (A[r] > A[maior])){
        maior = r;
    }

    if (maior != i){
        Troca(A, i, maior);
        Heapify(A, maior, tamanho);
    }
}



void Build(int A[], int tamanho){
   for(int i = tamanho/2; i >= 0; i--){
        Heapify(A, i, tamanho);
   }
}

void Heapsort(int A[], int tamanho){
    Build(A, tamanho);
    int comprimento = tamanho;
    for(int i = comprimento; i>0; i--){
        Troca(A, i, 0);
        comprimento--;
        Heapify(A,0, comprimento);
    }
}
