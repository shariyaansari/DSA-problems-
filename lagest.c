#include <stdio.h>

int main()              //Declaring the main function 
{
    int n;
    printf("Enter the number of elements in the array: ");    //Input for the number from users 
    scanf("%d", &n);

    int arr[n];              //Array declaration

    printf("Enter %d elements: \n", n);     
    for (int i = 0; i < n; i++) {           //input of value inside array.
        scanf("%d", &arr[i]);
    }

    int max = arr[0];                   //Declaring first element as max to compare the rest with first.

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", max);       //Printing the largest element of the array .

    return 0;
}

