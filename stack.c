#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;           // Size of the array(no of elements)
    int top;          // Top is to point the index of the array 
    int *arr;        // Input of num. 
};
struct stack *S;

void push(struct stack *S,int x);       
int pop();
int isfull();
int isempty();
int peek(struct stack *S,int i);


//Start of main function.
int main()
{
    struct stack *S = (struct stack *)malloc(sizeof (struct stack)); 
    S->size = 5;
    S -> top = -1;
    S -> arr = (int *)malloc(S->size * sizeof(int));  

    push( S, 78);
    push( S, 89);
    push( S, 76);
    push( S, 34);
    push( S, 50);
    //push( S, 5);      //After 5 elements stack overflowed!
    
    printf("%d\n",isfull(S));
    printf("%d\n",isempty(S));

    printf("%d is popped\n ",pop(S));
    printf("%d after popped\n",pop(S));

    for(int j = 1; j <= S->top+1; j++)
    {
        printf("The value at index %d is %d \n", j , peek(S, j));
    }


}
//end of the main function 

int isfull(struct stack *S)
{
    if(S->top == S->size-1)
    {
        return 1;
    }
    else
        return 0;
}

int isempty(struct stack *S)
{
    if(S->top == -1)
    {
        return 1;
    }
    else
        return 0;
}

void push(struct stack *S,int x)
{
    if(isfull(S))
    {
        printf("Stack Overflow!");
    }
    else 
    {
        S->top++;
        S->arr[S->top]=x;
    }
    
}

int pop(struct stack *S)
{
    if(isempty(S))
    {
        printf("Stack Underflow!");
    }
    else
    {
        int value = S->arr[S->top];
        S->top--;
        return value;
    }
}

int peek(struct stack *S, int i)
{
    int val = S->top-i+1;
    if(val<0)
    {
        printf("Invalid Operation");
        return -1;
    }
    else
    {
        return S->arr[val];
    }
}


