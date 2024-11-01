
#include <stdio.h>

int kalkulasiPerjam(int awal, int akhir) {
    if (akhir >= awal) {
        return akhir - awal;
    } else {
        return (12 - awal) + akhir;
    }
}

int main() {
    int awal, akhir, jam;
    
    printf("masukan waktu antara (1-12): ");
    scanf("%d", &awal);
    printf("masukan waktu antara  (1-12): ");
    scanf("%d", &akhir);
    
    jam = kalkulasiPerjam(awal, akhir);
    printf("bekerja perjam : %d jam\n", jam);
    
    return 0;
}

