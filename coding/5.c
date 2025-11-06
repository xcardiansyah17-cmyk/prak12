#include <stdio.h>
int hasil_kali (int a, int b, int c)
{
    int hasil;
    hasil = a*b*c;
    return hasil;
}
int main() {
    int a; 
    int b;
    int c;
    int hasil;

    a=1;
    b=2;
    c=3;
    hasil = hasil_kali(a, b, c);
    printf("Hasil perkalian adalah : %d\n",hasil);
    return 0;
}