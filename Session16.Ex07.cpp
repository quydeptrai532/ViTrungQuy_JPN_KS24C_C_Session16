#include <stdio.h>

void quydz(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int myArray[] = {40, 10, 50, 20, 30};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    quydz(myArray, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}

