#include <iostream>
#include <math.h>

int main () {
    // Deklarasi variabel
    float alas, tinggi, sisiMiring;

    // Inisialisasi nilai alas dan tinggi
    alas = 4;
    tinggi = 5;
    
    sisiMiring = pow(alas , 2) + pow(tinggi , 2);
    
    printf("Alas Segitga : %.2f cm\n",alas);
    printf("Tinggi Segitga : %.2f cm\n",tinggi);
    printf("sisiMiring Segitga : %.2f cm\n",sisiMiring);
    
    return 0;

}
