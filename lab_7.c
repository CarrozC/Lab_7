#include <stdio.h>

void bubbleSort(int array[], int size) {
    int i, j, temp, swaps;
    swaps = 0;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swaps++;
            }
        }
    }

    for (i = 0; i < size; i++) {
        printf("Index %d: %d swaps\n", i, swaps);
    }
}

int main() {
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int size = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, size);

    return 0;
}
