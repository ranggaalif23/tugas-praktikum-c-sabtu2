#include <stdio.h>

int main() {
    int N;

    // Meminta input dari pengguna
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    // Percabangan sesuai flowchart
    if (N > 50) {
        N = N + 10;
    } else {
        N = N - 25;
        N = N + 10;
    }

    // Menampilkan hasil
    printf("Nilai N setelah diproses: %d\n", N);

    return 0;
}

