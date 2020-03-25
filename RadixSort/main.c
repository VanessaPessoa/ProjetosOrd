#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CountingSort.h"
#include "RadixSort.h"

void imprime(int A[], int n){
    for(int i = 0; i < n; i++)
        printf("%d \n", A[i]);
}

int main(){
    int A[] ={ 84, 22, 12, 12, 323, 123, 90, 79, 452, 455, 52, 252, 856, 343, 5, 24,674};
    int n = sizeof(A) / sizeof(A[0]);
    int k = 0;

    for(int i = 0; i < n; i++){
        if( A[i] > k){
            k = A[i];
        }
    }
    printf("Antes do couting sort: \n");
    imprime(A, n);
    printf("Depois do counting sort \n");
    countSort(A, n, k);
    imprime(A, n);


    int B[] ={12, 245, 90, 534, 46, 86, 98, 45, 834, 556, 754, 771, 32};
    n = sizeof(B) / sizeof(B[0]);
    k = 0;

    for(int i = 0; i < n; i++){
        if( B[i] > k){
            k = B[i];
        }
    }
    printf("Antes do radix sort: \n");
    imprime(B, n);
    printf("Depois do radix sort \n");
    radixsort(A, n, k);
    imprime(A, n);


    return 0;
}
