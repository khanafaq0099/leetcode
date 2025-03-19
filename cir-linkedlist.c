#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node_t;

Node_t *CreateNode(int data)
{
    Node_t *newNode = malloc(sizeof(Node_t));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

Node_t *CreateCircular(){
    Node_t *first = CreateNode(1);
    Node_t *second = CreateNode(2);
    Node_t *third  = CreateNode(3);

    first->next = second;
    second->next = third;
    third->next = first;

    return first;
}

int main(){

    // Node_t *head = CreateNode(1);
    // head->next = CreateNode(2);
    // head->next->next = CreateNode(3);
    // head->next->next->next = head;

    Node_t *head = CreateCircular();

    Node_t *p  = head;
    for (int i = 0; i < 4; i++)
    {
        printf("%d \n", head->data);
        head = head->next;
    }
    
}