#include <stdio.h>

int main() {
    int bilangan;
    
    // Input bilangan bulat
    
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &bilangan);
    
    // Memeriksa apakah bilangan genap atau ganjil
    if (bilangan % 2 == 0) {
        printf("GENAP\n");
    } else {
        printf("GANJIL\n");
    }
    return 0;
}
