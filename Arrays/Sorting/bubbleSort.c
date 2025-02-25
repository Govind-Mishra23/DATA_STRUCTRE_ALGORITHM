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