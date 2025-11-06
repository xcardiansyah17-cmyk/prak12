#include <stdio.h>

int main() {
    int a;
    printf("Masukkan sembarang angka : ");
    scanf("%d", &a);

    if ((a > 0) && (a % 2 == 0)) {
        printf("\n Bilangan tersebut adalah bilangan positif & bilangan genap\n");
    } 
    else if ((a > 0) && (a % 2 != 0)) {
        printf("\n bilangan tersebut adalah bilangan positif & bilangan ganjil \n");
    } 
    else if (a < 0) {
        printf("\n Bilangan tersebut adalah bilangan negatif\n");
    } 
    else {
        printf("\n Anda memasukkan angka 0\n");
    }
    
}