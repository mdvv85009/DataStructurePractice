#include <iostream>
using namespace std;

#define MAX_ITEM 10

typedef struct tagQueue{
    int item[MAX_ITEM];
    int front = -1;
    int rear = -1;
}Queue;
Queue queue;

void queue_enqueue(Queue* queue, int value){
    if(queue -> rear != MAX_ITEM - 1)
        queue -> item[++(queue -> rear)] = value;
}

int queue_dequeue(Queue* queue){
    if(queue -> rear != -1){
        int res = queue -> item[++(queue -> front)];
        queue -> item[queue -> front] = NULL;
        return res;
    }
}