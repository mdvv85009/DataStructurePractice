#include <iostream>
using namespace std;

#define MAX_ITEM 10
typedef struct tagStack{
    int Item[MAX_ITEM];
    int Top = -1;
} Stack;

void stack_push(Stack* stack, int value){
    if(stack_isFull(stack))
        stack -> Item[++(stack -> Top)] = value;
}

void stack_pop(Stack* stack, int* value){
    if(stack_isEmpty(stack))
        *value = stack -> Item[(stack -> Top)--];
}

bool stack_isFull(Stack* stack){
    if(stack -> Top == (MAX_ITEM - 1))
        return true;
    else
        return false;
}

bool stack_isEmpty(Stack* stack){
    if(stack -> Top == -1)
        return true;
    else
        return false;
}