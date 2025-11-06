#include <stdio.h>

int main() {
    int nilaiAngka;

    // Meminta pengguna memasukkan nilai
    printf("Masukkan nilai angka (1-10): ");
    
    // Membaca input angka dari pengguna
    scanf("%d", &nilaiAngka);

    // Menggunakan switch untuk menentukan nilai huruf
    switch (nilaiAngka) {
        // Rentang 1-3
        case 1:
        case 2:
        case 3:
            printf("Nilai Anda: E\n");
            break;

        // Nilai 4
        case 4:
            printf("Nilai Anda: D\n");
            break;

        // Rentang 5-7
        case 5:
        case 6:
        case 7:
            printf("Nilai Anda: C\n");
            break;

        // Rentang 8-9
        case 8:
        case 9:
            printf("Nilai Anda: B\n");
            break;

        // Nilai 10
        case 10:
            printf("Nilai Anda: A\n");
            break;

        // Untuk semua angka lain di luar 1-10
        default:
            printf("Input tidak valid. Harap masukkan angka antara 1 sampai 10.\n");
            break;
    }

    return 0;
}