#include<stdio.h>
int data=100;
void fungsi_satu();
void fungsi_dua();
int main() {
    int data=200;
    fungsi_satu();
    fungsi_dua();
    printf("Nilai data di dalam main: %i\n",data);
    return 0;
}
void fungsi_satu() {
    int data=300;
    printf("Nilai data di dalam fungsi satu: %i\n",data);
}
void fungsi_dua() {
    printf("Nilai data di dalam fungsi dua: %i\n",data);
}