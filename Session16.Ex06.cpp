#include <stdio.h>

int quydz(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int myArray[] = {10, 20, 30, 40, 50};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int valueToFind = 30;

    int result = quydz(myArray, size, valueToFind);

    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", valueToFind, result);
    } else {
        printf("Phan tu %d khong tim thay trong mang.\n", valueToFind);
    }

    return 0;
}

