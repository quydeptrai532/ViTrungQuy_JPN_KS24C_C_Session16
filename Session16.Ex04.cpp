#include <stdio.h>


void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu %d: %d\n", i, *(arr + i));
    }
}

int main() {
    int number[] = {10, 20, 30, 40, 50};
    int size = sizeof(number) / sizeof(int);  
	printf("Cac phan tu trong mang la:\n");
    printArray(number, size);
    return 0;
}

