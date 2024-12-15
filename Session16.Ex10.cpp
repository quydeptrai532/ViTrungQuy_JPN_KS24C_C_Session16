#include <stdio.h>

void quydz(int *arr, int *size, int position) {
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int myArray[6] = {10, 20, 30, 40, 50}; 
    int size = 5;  
	int positionToRemove = 2; 
    quydz(myArray, &size, positionToRemove);
    printf("M?ng sau khi xóa ph?n t?: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}

