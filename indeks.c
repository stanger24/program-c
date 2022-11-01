#include <stdio.h>
#include <string.h>

void main(){

    char kata[100];
	char alfa; 
    char *hasil;

    printf("\tNama : Rizky Andika Putra\n");
    printf("\tNIM : 22343011\n");
    printf("========================================\n\n");
    printf("\tProgram kata\n\n");
    printf("\tMasukkan kata :");
    gets(kata);
    printf("\thuruf yang di cari :");
    scanf(alfa);
    printf("\n\n");
    printf("mencari huruf %c di dalam %s : ",alfa,kata);
    hasil = strchr(kata,alfa);

    while(hasil != NULL){
        hasil = strchr(hasil+1, alfa);
        printf("Ditemukan pada huruf ke-%d\n", hasil - kata+1);
    }
}
