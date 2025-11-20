#include <stdio.h>

int main() {
    int a, b, c;

    printf("=== PENENTUAN BILANGAN TENGAH (MEDIAN) ===\n");
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);
    printf("Masukkan bilangan ketiga: ");
    scanf("%d", &c);

    printf("\nBilangan yang dimasukkan: %d, %d, %d\n", a, b, c);

    // Kasus 1: Bilangan 'a' adalah nilai tengah
    // Ini terjadi jika (b < a < c) atau (c < a < b)
    if ((b < a && a < c) || (c < a && a < b)) {
        printf("Bilangan yang terletak di tengah adalah: **%d**\n", a);
    } 
    // Kasus 2: Bilangan 'b' adalah nilai tengah
    // Ini terjadi jika (a < b < c) atau (c < b < a)
    else if ((a < b && b < c) || (c < b && b < a)) {
        printf("Bilangan yang terletak di tengah adalah: **%d**\n", b);
    } 
    // Kasus 3: Bilangan 'c' adalah nilai tengah
    // Ini terjadi jika (a < c < b) atau (b < c < a)
    else if ((a < c && c < b) || (b < c && c < a)) {
        printf("Bilangan yang terletak di tengah adalah: **%d**\n", c);
    } 
    // Kasus 4: Jika ada dua atau tiga bilangan yang nilainya sama
    else {
        // Jika ada nilai yang sama, nilai tengah adalah nilai tersebut
        if (a == b || a == c) {
            printf("Bilangan yang terletak di tengah adalah: **%d** (Karena ada dua atau lebih nilai yang sama)\n", a);
        } else if (b == c) {
            printf("Bilangan yang terletak di tengah adalah: **%d** (Karena ada dua atau lebih nilai yang sama)\n", b);
        } else {
             // Ini seharusnya tidak terjadi jika semua kasus di atas telah ditangani dengan benar
             printf("Gagal menemukan nilai tengah (Kemungkinan semua bilangan sama).\n");
        }
    }

    return 0;
}