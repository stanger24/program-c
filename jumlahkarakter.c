#include <stdio.h>
#include <string.h>


int main(){
    char teks[100];
    int jumlahKarakter;

    printf("\tNama : Rizky Andika Putra\n");
    printf("\tNIM : 22343011\n");
    printf("========================================\n\n");
    printf("\tProgram Menghitung Jumlah Karakter\n\n");
    printf("\tInput String : ");
    gets(teks);
    printf("========================================\n\n");

    jumlahKarakter = strlen(teks);
    printf("\tJumlah Karakter : %d", jumlahKarakter);

    getch();
    return 0;
}
