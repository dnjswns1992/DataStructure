//
// Created by WooHeeSeop on 2024-04-22.
//
#include "stdio.h"
#include "Example01_Stack.h"
#include "stdlib.h"
#define SIZE 100
int stack[SIZE];
int top = - 1;

void push(int item){

    if(full()) {
        fprintf(stderr,"Stack is full");
        exit(1);
    }else stack[++top] = item;

}
int pop(){

    if(empty()) {
        fprintf(stderr,"Stack is empty");
        exit(1);
    }else return stack[top--];
}
int peek(){

    if(empty()) {
        fprintf(stderr,"Stack is empty");
        exit(1);
    }
    return stack[top];
}
int empty(){

    return top == -1;
}
int full(){
    return top == (SIZE - 1);
}

