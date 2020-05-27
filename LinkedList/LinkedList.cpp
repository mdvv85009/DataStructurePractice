#include<iostream>
using namespace std;

typedef struct ListNode{
    int data;
    struct ListNode *next;
}node;
node *head = new node;


void linkedlist_insert(node* p, int value){
    node *newNode = new node;
    newNode -> data = value;
    newNode -> next = p -> next;
    p -> next = newNode;
}

void linkedlist_delete(node* head, node* oldNode){
    node *preNode = head;
    while(preNode -> next != oldNode)
        preNode = preNode -> next;
    preNode -> next = oldNode -> next;
    free(oldNode);
}

void linkedlist_print(node* head){
    node* node = head;
    while(node){
        cout << node -> data;
        cout << endl;
        node = node -> next;
    }
}