#include<stdio.h> 
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 10 

char stack [100] ; 
int top = -1 ; 

void push (char c){
    if(top == 99){
        printf("stack overflows") ; 
        exit(1) ; 
    }else {
        top++ ; 
        stack[top] = c ;
    }
}
char pop(){
    char x ; 
    if(top == -1){
        printf("stack underflows");
        exit(1) ; 
    }else {
        x = stack[top] ; 
        top-- ; 
    }
    return x ; 
}
int main(){
    char str [20] ; 
    printf("input string") ; 
    get(str) ; 
    for(int i = 0 ; i<20; i++){
        push(str[i]) ; 
    }
    for(int i = 0 ; i<20; i++){
        str[i] = pop() ; 
    }
    puts(str) ; 
    return 0  ;
}
