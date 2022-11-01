#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){

//program mengelola nilai mahasiswa
const N = 50;
char nama[N][30], uts[N][6], uas[N][6], tugas[N][6], nAkhir[N][6];
char namanya[30], utsnya[6], uasnya[6], tugasnya[6], nAkhirnya[6];
int i,jumlah;

printf("Mengelola nilai mahasiswa\n");
printf("Nama : Rizky Andika Putra\n");
printf("NIM  : 22343011\n\n");
printf("=================================================\n\n");
printf("Masukkan jumlah data : ");
scanf("%d", &jumlah); fflush(stdin);

printf("Menginput nama mahasiswa :\n");
for (i=1; i<=jumlah; i++){
        printf("Masukkan nama mahasiswa ke-%d : ", i);
        gets(namanya); fflush(stdin);
        printf("Masukkan nilai UTS  : ", i);
        gets(utsnya);fflush(stdin);
        printf("Masukkan nilai UAS  : ", i);
        gets(uasnya);fflush(stdin);
        printf("Masukkan nilai tugas  : ", i);
        gets(tugasnya);fflush(stdin);
        strcpy(nama[i], namanya);
        strcpy(uts[i], utsnya);
        strcpy(uas[i], uasnya);
        strcpy(tugas[i], tugasnya);
    printf("\n");
    
    int nakhir = atoi(uts[i])*0.3 + atoi(uas[i])*0.3 + atoi(tugas[i])*0.4;
        sprintf(nAkhir[i], "%d", nakhir);
}
printf("Daftar nilai mahasiswa : \n");
printf("NO   NAMA\t    UTS\t\t UAS\t TUGAS\t N.AKHIR\n");
for (i=1; i<=jumlah; i++){
        printf("%d   %3s\t     %3s\t  %3s\t  %3s\t  %3s", i, nama[i], uts[i], uas[i], tugas[i], nAkhir[i]);
        printf("\n");}

return 0;

}
