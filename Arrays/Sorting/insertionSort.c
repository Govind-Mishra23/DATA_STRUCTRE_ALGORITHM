#include<stdio.h>
void insertionSort(int arr[] , int size){
    for(int i = 0 ; i<size; i++){
        int curr = arr[i] ; 
        int prev = i-1; 
        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev] ; 
            prev-- ; 
        }
        arr[prev+1] = curr ; 
    }
}

void traverse(int arr[], int size){
    for(int i = 0 ; i<size; i++){
        printf("%d, ", arr[i]) ; 
    }
}

int main(){
    int arr [] = {5,10,2,13,8,90} ; 
    int n = sizeof(arr)/ sizeof(arr[0]) ; 
    insertionSort
    (arr, n); 
    traverse(arr, n) ; 
    return 0 ; 
}

// The function insertionSort takes an array arr and its size size as arguments.
// It iterates through each element of the array starting from the second element.
// For each element, it stores the current value in curr and initializes prev to the index of the previous element.
// It then shifts elements of the sorted portion of the array to the right until it finds the correct position for curr.
// Finally, it inserts curr into its correct position in the sorted portion of the array.


 
