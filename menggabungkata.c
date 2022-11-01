#include <stdio.h>
#include <string.h>


int main(){
    char kata1[50];
    char kata2[50];
    
    printf("\tNama : Rizky Andika Putra\n");
    printf("\tNIM : 22343011\n");
    printf("========================================\n\n");
    printf("\tProgram Menggabung kata \n\n");
    printf("\tInput String : \n");
    printf("\tKata satu: ");
    gets(kata1);
    printf("\tkata dua : ");
    gets(kata2);
    printf("========================================\n\n");

    strcat(kata1,kata2);
    printf("\tgabungan kata: %s", kata1);

    getch();
    return 0;
}
