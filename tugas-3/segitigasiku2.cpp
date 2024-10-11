#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, sisi;

    // Input alas dan tinggi
    printf("Masukkan panjang sisi alas (cm): ");
    scanf("%f", &alas);
    printf("Masukkan panjang sisi tinggi (cm): ");
    scanf("%f", &tinggi);

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisi = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil
    printf("Panjang sisi segitiga adalah: %.2f cm\n", sisi);

    return 0;
}

