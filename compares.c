#include <stdio.h>


//Start of function compareArrays()
int compareArrays(int arr1[], int arr2[]) {
    for (int i = 0; i < 5; i++) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}
//Start of function compareArrays()


int main() {
    int arr1[5], arr2[5];               //Declaring arrays to compare

    printf("Enter elements of the first array:\n");      //Input element for both arrays 
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    if (compareArrays(arr1, arr2)) {                      //function calling 
        printf("The arrays are identical.\n");
    } else {
        printf("The arrays are not identical.\n");
    }

    return 0;
}
