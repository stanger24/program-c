#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int main()
 {
 	char kalimat[100];
 	int b,c;

 	printf("\tNama : Rizky Andika Putra\n");
    printf("\tNIM : 22343011\n");
    printf("========================================\n\n");
    printf("\tProgram membalik kalimat \n\n");
    printf("Masukkan sebuah kalimat : ");
    gets(kalimat);
    strrev(kalimat);
    printf("Jika dibalik menjadi : %s",kalimat);
    return 0;
 }
