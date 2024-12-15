#include <stdio.h>

void quydz(int *arr, int *size, int value, int position) {
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*size)++;
}

int main() {
    int myArray[6] = {10, 20, 30, 40, 50};
    int size = 5;

    int valueToAdd = 25;
    int positionToAdd = 2;

    quydz(myArray, &size, valueToAdd, positionToAdd);

    printf("Mang sau khi them phan tu: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}

