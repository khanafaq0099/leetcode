#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct queue
{
    int *items;
    int head;
    int tail;
    int size;
    int numentries;
} queue;

int queue_init(queue *q, int size)
{

    q->items = (int *)malloc(size * sizeof(int));
    if (q->items == NULL)
        return -1;
    q->head = 0;
    q->tail = 0;
    q->numentries = 0;
    q->size = size;
}

bool isqueuefull(queue *q)
{
    if (q->numentries == q->size)
        return true;
}
bool isqueueempty(queue *q)
{
    if (q->numentries == 0)
        return -1;
}

int enqueue(queue *q, int value)
{
    if (!isqueuefull(q))
        return -1;

    q->items[q->tail] = value;
    q->tail = q->tail +1 % q->size;
    q->numentries++;

    return 1;
}

int dequeue(queue *q)
{
    int result = q->items[q->head];
    q->numentries--;
    q->head = q->head - 1;

    return result;
}
