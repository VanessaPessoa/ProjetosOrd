#include <iostream>
using namespace std;

void printArray(int A[], int n){
    int i;
    for(i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int A[], int n){
    int i, j, aux;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (A[j] > A[j+1]){
                aux = A[j+1];
                A[j+1] = A[j];
                A[j] = aux;
                }
        }
    }
}

int main(){
    int A[] = { 20, 12, 15, 3, 1, 32, 10, 40, 100, 35};
    int n = sizeof(A)/ sizeof(A[0]);
 cout << n << endl;
    cout << " Antes do bubble sort" << endl;
    printArray(A,n);
    bubbleSort(A,n);
    cout<< "Depois do bubble sort" << endl;
    printArray(A,n);

    return 0;
}

