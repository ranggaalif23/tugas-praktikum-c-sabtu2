#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N, found = 0;

    printf("Masukkan bilangan integer: ");
    scanf("%d", &N);

    printf("12 17 10 5 15 25 11 7 25 16 19\n");
    for (int i = 0; i < 11; i++) {
        if (A[i] == N) {
            if (!found) {
                printf("ADA\n");
                printf("Lokasi bilangan yang sama: ");
                found = 1;
            }
            printf("%d ", i);
        }
    }

    if (!found) {
        printf("TIDAK ADA\n");
    }

    return 0;
}
