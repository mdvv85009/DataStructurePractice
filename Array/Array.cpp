#include<iostream>
#define ARRAY_SIZE 10
using namespace std;

int array_get(int index){
    return a[index];
}

int array_set(int index, int value){
    a[index] = value;
}

void array_printAll(){
    for(int i = 0; i < ARRAY_SIZE; i++)
        cout << a[i] << " ";
    cout << endl;
}

void array_copy(int* copyArray){
    for(int i = 0; i < ARRAY_SIZE; i++)
        copyArray[i] = a[i];
}

void array_insert(int index, int value){
    for(int i = ARRAY_SIZE - 1; i >= index; i--)
        a[i + 1] = a[i];
    array_set(index, value);
}

void array_delete(int index){
    for(int i = index; i < ARRAY_SIZE; i++)
        a[i] = a[i + 1];
}
