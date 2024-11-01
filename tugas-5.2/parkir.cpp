#include <stdio.h>

int hitungBiayaParkir(int masuk, int keluar) {
    int jam;
    if (keluar >= masuk) {
        jam = keluar - masuk;
    } else {
        jam = (12 - masuk) + keluar;
    }
    
    if (jam <= 1) {
        return 2000;
    } else {
        return 2000 + (jam - 1) * 500;
    }
}

int main() {
    int masuk, keluar, biaya;
    
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &masuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &keluar);
    
    biaya = hitungBiayaParkir(masuk, keluar);
    printf("Biaya parkir: %d\n", biaya);
    
    return 0;
}

