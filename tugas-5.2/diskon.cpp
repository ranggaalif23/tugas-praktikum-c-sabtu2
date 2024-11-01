#include <stdio.h>

float hitungDiskon(char jenis, float harga) {
    float diskon;
    switch (jenis) {
        case 'A': diskon = 0.10; break;
        case 'B': diskon = 0.15; break;
        case 'C': diskon = 0.20; break;
        default: diskon = 0.0; break;
    }
    return harga * (1 - diskon);
}

int main() {
    int kode;
    char jenis;
    float harga, hargaSetelahDiskon;
    
    printf("Masukkan kode barang: ");
    scanf("%d", &kode);
    printf("Masukkan jenis barang (A, B, C): ");
    scanf(" %c", &jenis);
    printf("Masukkan harga barang: ");
    scanf("%f", &harga);
    
    hargaSetelahDiskon = hitungDiskon(jenis, harga);
    printf("Jenis barang %c mendapat diskon .Harga setelah diskon: %.2f\n", jenis, hargaSetelahDiskon);
    
    return 0;
}

