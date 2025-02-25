#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node
{
    int data;
    struct node *next;
}node_t;

typedef struct queue
{
    node_t *head;
    node_t *tail;

}queue_t;

void init_queue(queue_t *q){
    q->head = NULL;
    q->tail = NULL;
}

bool enqueue(queue_t *q, int value){

    node_t *newNode = malloc(sizeof(node_t));
    if (newNode == NULL ) return false;
    
    newNode->next = NULL;
    newNode->data = value;

    if(q->tail != NULL){
        q->tail->next = newNode;
    } 
    q->tail = newNode;
    if (q->head == NULL)
    {
        q->head = newNode;
    }

    return true;
}

int dequeue(queue_t *q){
    if(q->head == NULL) return INT_MIN;

    node_t *tmp = q->head;
    int result = tmp->data;
    q->head = q->head->next;

    if (q->head == NULL)
    {
        q->tail = NULL;
    }

    free(tmp);
   
    return  result;

}

int main(){
    queue_t q1;

    init_queue(&q1);

    enqueue(&q1,10);
    enqueue(&q1,20);
    enqueue(&q1,30);
    enqueue(&q1,40);

    int res;
    while ((res = dequeue(&q1)) != INT_MIN)
    {
        printf("%d \n",res);
    }
    


    return 0;
}