#include <stdio.h>

int main() {
    int count = 0;

    int arr[5], visited[5];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    for (int i = 0; i < 5; i++) {
        if (visited[i] == 1) {
            continue;
        }
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
    }

    printf("Total number of duplicate elements in the array: %d\n", count);

    return 0;
}

