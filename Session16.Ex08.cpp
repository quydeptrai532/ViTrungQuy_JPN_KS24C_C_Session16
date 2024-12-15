#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100], reverseString[100];
    char *ptr1, *ptr2;

    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    
    inputString[strcspn(inputString, "\n")] = '\0';

    ptr1 = inputString + strlen(inputString) - 1;
    ptr2 = reverseString;

    while (ptr1 >= inputString) {
        *ptr2 = *ptr1;
        ptr1--;
        ptr2++;
    }
    *ptr2 = '\0';

    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

