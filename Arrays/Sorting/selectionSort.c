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