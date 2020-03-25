#ifndef COUNTINGSORT_H_INCLUDED
#define COUNTINGSORT_H_INCLUDED


void countSort(int A[], int n, int k){
    int output[n];
    //inicializa a matriz inteira com 0
    int freq[k];
    memset(freq, 0, sizeof(freq));

    for(int i = 0; i < n; i++){
        freq[A[i]]++;
    }

    int index = 0;
    for(int i = 0; i < k; i++){
        while(freq[i]--){
            A[index++] = i;
        }
    }
}

#endif // COUNTINGSORT_H_INCLUDED
