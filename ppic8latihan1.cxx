#include <stdio.h>

int main() {
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int A[11]; // Array untuk menyimpan data
    int i = 0, j = 0;

    // Memproses data hingga menemukan 999
    while (data[i] != 999 && j < 11) {
        A[j] = data[i]; // Simpan data ke array A
        i++;
        j++;
    }

    // Cetak hasil array A
    printf("Isi array A:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
