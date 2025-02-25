#include <stdio.h>
void bubbleSort(int arr[], int size){
    for(int i=0; i<size ; i++){
        for(int j = 0 ; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j]; 
                arr[j] = arr[j+1] ; 
                arr[j+1] = temp ;  
            }
        }
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
    bubbleSort(arr, n); 
    traverse(arr, n) ; 
    return 0 ; 
}

/*
1. The bubbleSort function implements the Bubble Sort algorithm, which repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

2. The outer loop runs from 0 to size-1, and the inner loop runs from 0 to size-i-1, ensuring that the largest unsorted element bubbles up to its correct position in each iteration.

3. The traverse function is used to print the elements of the array after sorting, iterating through the array and printing each element followed by a comma.

4. In the main function, an array of integers is defined and its size is calculated using sizeof. The bubbleSort function is called to sort the array, and the traverse function is called to print the sorted array.

5. The time complexity of the Bubble Sort algorithm is O(n^2) in the worst and average cases, making it inefficient for large datasets. However, it is simple to implement and understand.
*/