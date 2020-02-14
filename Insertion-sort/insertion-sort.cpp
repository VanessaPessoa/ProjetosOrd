#include <bits/stdc++.h>

using namespace std;

void insertionSort(int A[], int n){
    int i, chave, j;
    for(i = 1; i < n; i++){
        chave = A[i];
        j = i - 1;
        while(j >= 0 && A[j] > chave){
            A[j+1] = A[j];
            j = j - 1;
        }
        A[j+1] = chave;
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

    cout << " Antes do insertion sort" << endl;
    printArray(A,n);
    insertionSort(A, n);
    cout<< "Depois do insertion sort" << endl;
    printArray(A,n);

    return 0;
}
