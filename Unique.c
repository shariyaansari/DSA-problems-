#include <stdio.h>

int main() {

    int arr[5], visited[5];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    printf("Unique elements in the array are:\n");
    for (int i = 0; i < 5; i++) {
        if (visited[i] == 1) {
            continue;
        }
        int is_unique = 1;
        for (int j = 0; j < 5; j++) {
            if (i != j && arr[i] == arr[j]) {
                is_unique = 0;
                visited[j] = 1;
            }
        }
        if (is_unique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}
