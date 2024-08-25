#include <stdio.h>
#include <stdlib.h>

int push(int x);

int pop();

void display();

void peek();

struct node 
{
    int data;
    struct node *next;
};
struct node* top = 0;

// struct node *getnote()
// {
//     return (struct node *)malloc(sizeof(struct node));
// }int
void freenode(struct node* p)
{
    free(p);
}

int main()
{
    printf("%d is pushed into the stack\n", push(3));
    printf("%d is pushed into the stack\n", push(3));
    printf("%d is pushed into the stack\n", push(3));
    printf("%d is pushed into the stack\n", push(3));
    printf("%d is pushed into the stack\n", push(3));
    printf("%d is pushed into the stack\n", push(4));
    display();
    pop();


}  

int push(int x)
{
    struct node *nn;
    nn = (struct node *)malloc(sizeof(struct node));
    nn->data = x;
    // nn->next = top;
    // top = nn;
    // return x;
    if(top == NULL)
    {
        nn->next = NULL;
        top = nn;
    }
    else
    {
        nn->next = top;
        top = nn;
    }
    return x;
}

int pop()
{
    struct node * temp;
    temp = top;
    int x;
    if(top == NULL)
    {
        printf("STACK UNDERFLOW");
    }
    else
    {
        x = temp -> data;
        printf("%d is deleted from the stack.\n",x);
        top = top->next;
        freenode(temp);
    }
}

void display()
{
    struct node * temp;
    temp = top;
    if(top == NULL)
    {
        printf("STACK UNDERFLOW");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

void peek()
{
    if(top == NULL)
    {
        printf("STACK UNDERFLOW");
    }
    else
    {
        printf("%d is the topmost element\n",top->data);
    }
}