// Abstract Data type (ADT) implementation.

#include <stdio.h>
#include <stdlib.h>

struct myArray      // Array for making ADT
{
    int total_size;         // memory we are reserving but not using.
    int used_size;          // memory we are going to use.
    int *ptr;               // to point the first element of array.
};


void createArray(struct myArray *a, int tSize,int uSize)
{ 
    //(*a).total_size = tSize;
    //(*a).used_size = uSize;7
    //(*a).ptr = (int *) malloc(tSize * sizeof(int));

    //the same thing can also be written as  :-

    a -> total_size = tSize;
    a -> used_size = uSize;
    a -> ptr = (int *) malloc(tSize * sizeof(int));
}
//end of createArray.


//Made this to take input from user 
//start of the setValue function 
void setValue(struct myArray *a)                    
{
    int n;
    for(int i=0;i < (a -> used_size); i++)
    {
        printf("ENTER MARKS: ");
        scanf("%d\n",&n);
        a ->ptr[i] = n;
    }
}
//end of the setvalue function.


//making this for printing the values.
 //start of the show function 
void show(struct myArray *a)                   
{
    for(int i=0;i < (a -> used_size); i++)
    {
        printf("%d\n", (a ->ptr[i])); 
    }
}
// end of the show function.


// Start of the main function.
int main()
{
    struct myArray marks;
    createArray(&marks, 20, 5);
    setValue(&marks); 
    show(&marks);
}
// End of the main function.

