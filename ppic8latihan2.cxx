#include <stdio.h>

int main() {
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int A[11];
    int i = 0, j = 0;

    // a. Menyimpan semua data
    printf("a. Menyimpan semua data:\n");
    i = 0; j = 0;
    while (data[i] != 999 && j < 11) {
        A[j++] = data[i++];
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // b. Menyimpan data lebih besar dari 9
    printf("b. Menyimpan data lebih besar dari 9:\n");
    i = 0; j = 0;
    while (data[i] != 999 && j < 11) {
        if (data[i] > 9) {
            A[j++] = data[i];
        }
        i++;
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // c. Menyimpan data lebih besar dari 9 secara berurutan
    printf("c. Menyimpan data lebih besar dari 9 secara berurutan:\n");
    i = 0; j = 0;
    while (data[i] != 999 && j < 11) {
        if (data[i] > 9) {
            A[j++] = data[i];
        }
        i++;
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // d. Menyimpan data bernilai ganjil
    printf("d. Menyimpan data bernilai ganjil:\n");
    i = 0; j = 0;
    while (data[i] != 999 && j < 11) {
        if (data[i] % 2 != 0) {
            A[j++] = data[i];
        }
        i++;
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // e. Menyimpan data ganjil secara berurutan
    printf("e. Menyimpan data ganjil secara berurutan:\n");
    i = 0; j = 0;
    while (data[i] != 999 && j < 11) {
        if (data[i] % 2 != 0) {
            A[j++] = data[i];
        }
        i++;
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
