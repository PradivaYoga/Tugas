#include <stdio.h>
#include <math.h>

//Penyelesaian Kasus BuildIT Udayana 2024
//Kasus 3. Bilangan Prima

// Penentuan apakah N adalah bilangan prima
const char* is_prime(unsigned long long N) {
    if (N <= 1) {
        return "BUKAN";
    }
    if (N <= 3) {
        return "PRIMA";
    }
    if (N % 2 == 0 || N % 3 == 0) {
        return "BUKAN";
    }
    
    // Pengecekan bilangan pembagi dari 5 hingga sqrt(N)
    unsigned long long limit = (unsigned long long)sqrt(N);
    for (unsigned long long i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0) {
            return "BUKAN";
        }
    }
    
    return "PRIMA";
}

int main() {
    unsigned long long N;
    scanf("%llu", &N);  
    printf("%s\n", is_prime(N));  
    return 0;
}