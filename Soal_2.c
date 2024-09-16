#include <stdio.h>
#include <string.h>

int main() {
    
    //Penyelesaian Kasus BuildIT Udayana 2024
    //Kasus 2. Permainan Kata Unik
    
    char A[101], B[101]; 
    int result;

    // Membaca input string A dan B
    fgets(A, sizeof(A), stdin);
    fgets(B, sizeof(B), stdin);

    // Menghapus newline karakter jika ada di akhir string
    A[strcspn(A, "\n")] = 0;
    B[strcspn(B, "\n")] = 0;

    // Membandingkan panjang kedua string
    if (strlen(A) != strlen(B)) {
        printf("BERBEDA\n");
    } else {
        // Bandingkan isi string secara detail
        result = strcmp(A, B);
        if (result == 0) {
            // String A dan B identik
            printf("IDENTIK\n");
        } else {
            // Panjang sama tetapi isi berbeda
            printf("MIRIP\n");
        }
    }

    return 0;
}
