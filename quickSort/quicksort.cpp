#include <bits/stdc++.h> 
using namespace std; 

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 


int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high - 1; j++) 
	{ 
		if (arr[j] < pivot) 
		{ 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		int pi = partition(arr, low, high); 
		quickSort(A, low, pi - 1); 
		quickSort(A, pi + 1, high); 
	} 
} 

void printArray(int A[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << A[i] << " "; 
	cout << endl; 
} 

int main() 
{ 
	int A[] = {10, 7, 8, 9, 1, 5, 30, 2, 13, 67, 1 , 0}; 
	int n = sizeof(A) / sizeof(A[0]); 
    cout << "Antes do quickSort \n"; 
	quickSort(A, 0, n - 1); 
	cout << "Depois do quickSort \n"; 
	printArray(A, n); 
	return 0; 
} 