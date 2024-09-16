#include <stdio.h>
#include <stdlib.h>

//Penyelesaian Kasus BuildIT Udayana 2024
//Kasus 1. Mengurutkan Bilangan

// Membandingkan dua integer
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;

    // Membaca jumlah nilai
    scanf("%d", &N);

    // Alokasi memori untuk array nilai
    int *values = (int*)malloc(N * sizeof(int));
    if (values == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Membaca nilai-nilai
    for (int i = 0; i < N; i++) {
        scanf("%d", &values[i]);
    }

    // Mengurutkan nilai-nilai
    qsort(values, N, sizeof(int), compare);

    // Menampilkan nilai-nilai yang sudah diurutkan
    for (int i = 0; i < N; i++) {
        printf("%d\n", values[i]);
    }

    // Membebaskan memori yang dialokasikan
    free(values);

    return 0;
}