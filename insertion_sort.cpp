#include <math.h> 
#include <stdio.h> 

void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
}
void ptu(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}
int main() 
{ 
    int arr[] = {2,6,9,5,7,3,4,19 };
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    insertionSort(arr, n); 
    ptu(arr, n); 
  
    return 0; 
}
