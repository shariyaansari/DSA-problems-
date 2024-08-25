#include <stdio.h>
#include<stdlib.h>


 //Declaring structure of the queue
struct queue              
{
    int size;
    int front;           
    int rear;
    int *arr;
};
struct queue *q;


//Declaring function for Enqueuing.
void enqueue(struct queue *q, int x);      

//Declaring Function for dequeuing.
void dequeue();

//Declaring function t display.
void peek(struct queue *q, int i);

//Start of main function.
int main()
{
    //Allocation memory dynamically 
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));   
    q->size = 5;
    q->front = -1;
    q->rear = -1;
    q->arr = (int*)malloc(q->size * sizeof(int));
    //calling enqueue
    enqueue(q,9);
    enqueue(q,12);
    enqueue(q,15);
    enqueue(q,18);
    enqueue(q,21);
    //enqueue(q,25);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);

}


//Start of Enqueue function.
void enqueue(struct queue *q, int x)
{
    if(q->rear == q->size-1)
    {
        printf("Queue is full!\n");
    }
    else 
    {
        if(q->front == -1 && q->rear == -1)
        {
            q->front=q->rear = 0;
            q->arr[q->rear] = x;
        }
        else
        {
            q->rear++;
            q->arr[q->rear] = x;
        }

        printf("%d is inserted in the queue\n",x);
    }
}
//end of enqueue.

//Start of dequeue
void dequeue(struct queue *q)
{
    if(q->front == -1 && q->rear == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        if(q->front == q->rear)
        {
            printf("%d is removed from the queue\n",q->arr[q->front]);
            q->front = q->rear = -1;
            
        }
        
        else
        {
            
            printf("%d removed successfully from the queue\n",q->arr[q->front++]);
        }
    }
}