#include <stdlib.h>
#include <stdio.h>

void  intercala(int A[], int ini, int m, int n)
{
    int i, j, k;
    int n1 = m - ini + 1;
    int n2 =  n - m;
      int L[n1], R[n2];
      for (i = 0; i < n1; i++)
        L[i] = A[ini + i];
    for (j = 0; j < n2; j++)
        R[j] = A[m + 1+ j];

    i = 0;
    j = 0;
    k = ini;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int A[], int i, int n)
{
    if (i < n)
    {
        int m = i+(n-i)/2;
        mergeSort(A, i, m);
        mergeSort(A, m+1, n);

        intercala(A, i, m, n);
    }
}



void printArray(int A[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf(" %d ", A[i]);
    }
    printf(" \n ");
}

int main(){
    int A[] = { 12, 3, 61, 19, 0, 20, 32, 10, 78, 43};
    int A_size =  sizeof(A) / sizeof(A[0]);

    printf("Antes do mergeSort \n");
    printArray(A, A_size);
    printf("Depois do mergeSort \n");
    mergeSort(A, 0, A_size -1);
    printArray(A, A_size);

    return 0;
}
