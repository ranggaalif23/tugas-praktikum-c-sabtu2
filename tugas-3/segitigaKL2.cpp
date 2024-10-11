#include <iostream>
#include <stdio.h>

int main() {
    int A, B, C;
    int ALAS, TINGGI;
    float keliling, luas;

    // KELILING
    printf("MASUKKAN ANGKA YANG MAU DI INPUT UNTUK RUMUS KELILING\n");
    printf("A: ");
    scanf("%i", &A);
    printf("B: ");
    scanf("%i", &B);
    printf("C: ");
    scanf("%i", &C);

    // LUAS
    printf("MASUKKAN ANGKA YANG MAU DI INPUT UNTUK RUMUS LUAS\n");
    printf("ALAS: ");
    scanf("%i", &ALAS);
    printf("TINGGI: ");
    scanf("%i", &TINGGI);

    // Penghitungan
    keliling = A + B + C;
    luas = 0.5 * ALAS * TINGGI;

    // Tampilkan hasil
    printf("HASIL DARI INPUT KELILING ADALAH: %.2f\n", keliling);
    printf("ALAS YANG DI INPUT: %d\n", ALAS);
    printf("TINGGI YANG DI INPUT: %d\n", TINGGI);
    printf("HASIL DARI INPUT LUAS ADALAH: %.1f\n", luas);

    return 0;
}

