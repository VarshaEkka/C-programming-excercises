//C Program to Access Elements of an Array Using Pointer 

#include <stdio.h>

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr;

    ptr = arr;

    printf("Elements of the array using pointer:\n");

    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}
