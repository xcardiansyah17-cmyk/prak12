#include <stdio.h>

int main() {
    float x, y;

    printf("\n=== PENENTUAN KUADRAN TITIK ===\n");
    printf("Masukkan koordinat X: ");
    scanf("%f", &x);
    printf("Masukkan koordinat Y: ");
    scanf("%f", &y);

    printf("\nTitik yang dimasukkan: (%.f, %.f)\n", x, y);

    if (x == 0 && y == 0) {
        printf("LOKASI: Titik berada pada **Titik Asal (Origin)** (0,0).\n");
    } else if (x == 0) {
        printf("LOKASI: Titik berada pada **Sumbu Y**.\n");
    } else if (y == 0) {
        printf("LOKASI: Titik berada pada **Sumbu X**.\n");
    } else if (x > 0 && y > 0) {
        printf("LOKASI: Titik berada di **Kuadran I**.\n");
    } else if (x < 0 && y > 0) {
        printf("LOKASI: Titik berada di **Kuadran II**.\n");
    } else if (x < 0 && y < 0) {
        printf("LOKASI: Titik berada di **Kuadran III**.\n");
    } else {
        printf("LOKASI: Titik berada di **Kuadran IV**.\n");
    }

    return 0;
}