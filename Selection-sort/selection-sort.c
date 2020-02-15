#include <bits/stdc++.h>

using namespace std;

void troca(int *A, int *B){
    int temp = A;
    A = B;
    B = temp;
}

void selectioSort(int A[], int n){
    int i, j, min;
    for(i = 0; i < n; j++){
        min = i;
        for(j = i+1; j < n; j++){
            if(A[j] < A[min]){
                min = j;
            }
        }
         troca(&A[min], &A[i]);
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

    cout << " Antes do selection sort" << endl;
    printArray(A,n);
    selectionSort(A, n);
    cout<< "Depois do selection sort" << endl;
    printArray(A,n);

    return 0;
}

