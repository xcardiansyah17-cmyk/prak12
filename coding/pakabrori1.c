#include <stdio.h>

int main() {
    float penghasilan_bulan;
    float penghasilan_tahun;
    const float BATAS_PAJAK = 15600000.0; // Batas penghasilan tahunan kena pajak

    printf("=== PENENTUAN KENA PAJAK ===\n");
    printf("Masukkan penghasilan per bulan (Rp): ");
    scanf("%f", &penghasilan_bulan);

    // Hitung penghasilan setahun
    penghasilan_tahun = penghasilan_bulan * 12;

    printf("\nPenghasilan Anda setahun: Rp %.2f\n", penghasilan_tahun);

    // Cek apakah penghasilan setahun melebihi batas
    if (penghasilan_tahun >= BATAS_PAJAK) {
        printf("STATUS: Penghasilan Anda **KENA PAJAK** (Melebihi batas Rp %.2f).\n", BATAS_PAJAK);
    } else {
        printf("STATUS: Penghasilan Anda **TIDAK KENA PAJAK** (Di bawah batas Rp %.2f).\n", BATAS_PAJAK);
    }

    return 0;
}