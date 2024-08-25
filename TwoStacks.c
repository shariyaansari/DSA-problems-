
//Implementation of Two stacks in an array.
#include <stdio.h>
#include <stdlib.h>

struct stack {               //defining structure of the stack.
    int size;
    int top1,top2;
    int *arr;
};
struct stack *S;

int push1(struct stack *S,int x);                
//Function to push integer to the first half of the stack.

int push2(struct stack *S,int y);
//Function to push integer to another half of the stack 

int pop1();
//function to pop the from first half of the stack.

int pop2();
//Function to pop from the next half of the element.

int peek(struct stack *S,int x);

//Start from main function 
int main()
{
    struct stack *S= (struct stack *)malloc(sizeof(struct stack));
    S->size = 10;
    S->top1 = -1;
    S->top2 = S->size/2;
    S->arr = (int *)malloc(S->size * sizeof(int));          // allocating memory dynamically 

    //implementng push1 and push 2 
    printf("Pushed %d in array through stack1\n",push1(S, 10));
    printf("Pushed %d in array through stack2\n",push2(S, 30));
    printf("Pushed %d in array through stack1\n",push1(S, 20));
    printf("Pushed %d in array through stack2\n",push2(S, 50));
    printf("Pushed %d in array through stack1\n",push1(S, 14));
    printf("Pushed %d in array through stack2\n",push2(S, 36));
    printf("Pushed %d in array through stack1\n",push1(S, 78));
    printf("Pushed %d in array through stack2\n",push2(S, 98));
    printf("Pushed %d in array through stack1\n",push1(S, 89));
    printf("Pushed %d in array through stack2\n",push2(S, 23));

    //pop operation 
    printf("Poppep %d from stack1 \n",pop1(S));
    printf("Poppep %d from stack2 \n",pop2(S));

    return 0;
}
//end of main function

//start of push1 to push elememt in stack 1.
int push1(struct stack *S,int x)
{ 
    //condition to see whethere half stack is full or not!
    if(S->top1 == (S->size/2)-1)
    {
        printf("Stack overflow");
        return 0;
    }
    //for inserting element in the first stack 
    else
    {
        S->top1++;
        S->arr[S->top1]=x;
        return x;
    }
}
//end of push 1 

//start of push2 to push element in stack2
int push2(struct stack *S,int x)
{
    // condition to see whether the stack 2 is full or not 
    if(S->top2 == (S->size)-1)
    {
        printf("Stack overflow");
    }
    //insert element 
    else
    {
        S->top2++;
        S->arr[S->top2]=x;
        return x;
    }
}
//end of push2

//pop1 is to pop the element out of the first stact 
int pop1(struct stack *S)
{
    //condition for underflow if stack is empty
    if(S->top1 == -1)
    {
        printf("Stack underflow!");
    }  
    //remove element if stack not empty   
    else
    {
        int val = S->arr[S->top1];
        S->top1--;
        return val;
    }
} 
//End of pop

//start of pop2
int pop2(struct stack *S)
{
    //condition for underflow if stack is empty
    if(S->top2 ==S->size/2)
    {
        printf("Stack underflow!");
    }    
    //remove element if stack not empty .
    else
    {
        int val = S->arr[S->top2];
        S->top2--;
        return val;
    }
} 
//end of pop2