#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char kata[50] = {'\0'};
    char temp[50] = {'\0'};
    int n, i, j = 0;

    printf("\tNama : Rizky Andika Putra\n");
    printf("\tNIM : 22343011\n");
    printf("========================================\n\n");
    printf("\tProgram Mengecek Kata - Kalimat Palindrom atau Bukan\n\n");
    printf("\tInput Kata : ");
    gets(kata);
    n = strlen(kata);

    for(i = 0; kata[i]; i++){
        kata[i] = tolower(kata[i]);
    }

    for(i = n-1; i >= 0; i--){
        temp[j] = kata[i];
        j++;
    }

    printf("\tkata ini adalah : ");
    if(strcmp(kata, temp) == 0)
        printf("Palindrom");
    else
        printf("Bukan Palindrom");

    getch();
    return 0;
}
