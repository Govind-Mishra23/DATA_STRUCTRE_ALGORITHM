#include <stdio.h>

void selectionSort(int arr[], int size){
    for(int i = 0 ; i<size ; i++){
        int minPos = i ; 
        for(int j = i+1; j<size; j++){
            if(arr[j] < arr[minPos]){
                minPos = j ; 
            }
        }
        int temp = arr[minPos] ; 
        arr[minPos] = arr[i] ; 
        arr[i] =temp ; 
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
    selectionSort(arr, n); 
    traverse(arr, n) ; 
    return 0 ; 
}


// The selectionSort function iterates through the array, finding the minimum element
// in the unsorted portion and swapping it with the first unsorted element.
// The traverse function is used to print the elements of the array after sorting.
// The main function initializes an array, calls the selectionSort function to sort it,
// and then calls the traverse function to print the sorted array.
