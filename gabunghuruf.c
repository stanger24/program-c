#include <stdio.h>
#include <string.h>


int main(){
    char hrf1['1'];
    char hrf2['1'];
    char hrf3['1'];
    char hrf4['1'];
    char gabung;
    //char gabkat[100];

    printf("\tNama : Rizky Andika Putra\n");
    printf("\tNIM : 22343011\n");
    printf("========================================\n\n");
    printf("\tProgram Menggabung kata \n\n");
    printf("\tInput huruf : \n");
    printf("\tHuruf satu: ");
    gets(hrf1);
    printf("\tHuruf dua : ");
    gets(hrf2);
    printf("\tHuruf tiga : ");
    gets(hrf3);
    printf("\tHuruf empat : ");
    gets(hrf4);
    printf("========================================\n\n");

    strcat(hrf1,hrf2,hrf3,hrf4);
    printf("\tgabungan Huruf: %s", hrf1);

    getch();
    return 0;
}
