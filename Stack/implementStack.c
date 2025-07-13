// implementation of stack using array 

#include <stdio.h> 
#include<stdlib.h> 
#define MAX 100 

struct stack{
    int items[MAX] ; 
    int top ; 
}; 




void init (struct stack *s){
    s->top  = -1 ;
}

struct stack* createStack() {
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    if (s == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    init(s); // Initialize stack top to -1
    return s;
}

int isEmpty(struct stack *s){
    return s->top == -1 ; 
}
int isFull(struct stack *s){
    return s->top == MAX-1 ; 
}
void push (struct stack *s, int x){
    if(isFull(s)){
        printf("stack overflows") ; 
        exit(1) ; 
    }else {
       s-> top++ ; 
       s->items[s->top] = x ;
    }
}

int pop(struct stack *s){
    if(isEmpty(s)){
        printf("stack underflows") ; 
        exit(1) ; 
    }else {
        int x = s->items[s->top] ; 
        s->top-- ; 
        return x ;
    }
}
void traverse(struct stack *s){
    if(isEmpty(s)){
        printf("stack is empty") ; 
        exit(1) ; 
    }else {
        int i = 0 ; 
        while(i<=s->top){
            printf("%d, ",s->items[i]) ; 
            i++ ; 
        }
    }
}

int main(){
    struct stack * s = createStack() ; 
    push(s, 10) ; 
    push(s, 11) ; 
    push(s, 12) ; 
    push(s, 13) ; 
    push(s, 14) ; 
    traverse(s) ; 
    return 0 ; 
}