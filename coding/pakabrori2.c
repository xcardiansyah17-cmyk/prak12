#include <stdio.h>
#include <stdbool.h>

int main() {
    int tahun;
    bool is_kabisat = false;

    printf("\n=== PENENTUAN TAHUN KABISAT ===\n");
    printf("Masukkan tahun yang ingin diperiksa: ");
    scanf("%d", &tahun);
    
    if (tahun % 400 == 0) {
        is_kabisat = true;
    } else if (tahun % 100 == 0) {
        is_kabisat = false;
    } else if (tahun % 4 == 0) {
        is_kabisat = true;
    } else {
        is_kabisat = false;
    }

    if (is_kabisat) {
        printf("HASIL: Tahun %d adalah **Tahun Kabisat**.\n", tahun);
    } else {
        printf("HASIL: Tahun %d **bukan** Tahun Kabisat.\n", tahun);
    }

    return 0;
}