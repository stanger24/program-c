#include <stdio.h>

int main(){
    int panjang, lebar, keliling, luas;

    printf("Program Menghitung Keliling Persegi Panjang\n\n");
    printf("Input Panjang\t: ");
    scanf("%d", &panjang);
    printf("Input Lebar  \t: ");
    scanf("%d", &lebar);

    
    keliling = (2 * panjang) + (2 * lebar);
    printf("Keliling \t: %d\n", keliling);
    return 0;
}
