/*ALL TYPES OF CIRCULAR QUEUE 
    1.Dequeue from front (normal)
    2.Enqueue from rear (normal)
    3.Dequeue from rear.
    4.Enqueue from front.*/
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


//function to enqueue in circular queue
void enqueue(struct queue *q, int x);

void dequeue();


int main()
{
    //Allocation memory dynamically 
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));   
    q->size = 5;
    q->front = -1;
    q->rear = -1;
    q->arr = (int*)malloc(q->size * sizeof(int));
    enqueue(q, 90);
    enqueue(q, 67);
    enqueue(q, 98);
    enqueue(q, 45);
    enqueue(q, 78);
    dequeue(q);
    dequeue(q);
    enqueue(q, 49);
    enqueue(q, 23);
    

}

//start of the enqueue 
//dequeue from front 
void enqueue(struct queue *q, int x)
{
    //checking if the queue is full or not.
    if(q->front == (q->rear +1)%q->size)
    {
        printf("Queue is full!\n");
    }
    else
    {
        //check if the front and rear are at start 
        if(q->front == -1 && q->rear == -1)
        {
            q->front = q->rear = 0;
            q->arr[q->rear] = x;
            printf("%d is successfully inserted inside the queue!\n",x);
        }
        else 
        {
            q->rear = (q->rear+1)%q->size;
            q->arr[q->rear] = x;            
            printf("%d is successfully inserted inside the queue!\n",x);
        }
    }
}
//end of enqueue 

//enqueue from rear.
void dequeue(struct queue *q)
{
    int value;
    if(q->front == -1 && q->rear == -1)
    {
        printf("Queue is empty !\n");
    }
    else 
    {
        if(q->front == q->rear)
        {
            int val = q->arr[q->front];
            q->front = q->rear = -1;
            printf("%d deleted from the queue \n", val);
        }
        else 
        {
            int val = q->arr[q->front];
            q->front = (q->front+1)%q->size;
            printf("%d deleted from the queue \n",val);
        }
    }
}


