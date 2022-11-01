#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){

//program mengelola nilai mahasiswa
const N = 50;
char nama[N][30], nomor[N][6], skor1[N][6], skor2[N][6], skor3[N][6], sAkhir[N][6];
char namanya[30], nomornya[6], skor1nya[6], skor2nya[6], skor3nya[6], sAkhirnya[6];
int i,jumlah;

printf("Menghitung skor pertandingan memanah dengan 3 kali pertandingn\n");
printf("Nama : Rizky Andika Putra\n");
printf("NIM  : 22343011\n\n");
printf("=====================================================================\n\n");
printf("Masukkan jumlah peserta : ");
scanf("%d", &jumlah); fflush(stdin);
printf("Menginput data peserta :\n");
for (i=1; i<=jumlah; i++){
        printf("Masukkan nama Peserta ke-%d : ", i);
        gets(nama[i]); fflush(stdin);
        printf("Masukkan nomor peserta  : ", i);
        gets(nomor[i]);fflush(stdin);
        printf("Masukkan skor 1  : ");
        gets(skor1[i]);fflush(stdin);
        printf("Masukkan skor 2  : ");
        gets(skor2[i]);fflush(stdin);
        printf("Masukkan skor 3  : ");
        gets(skor3[i]);fflush(stdin);
    printf("\n");
    
    //ubah nilai uas dan tugas ke integer
    int sAkhirnya = atoi(skor1[i]) + atoi(skor2[i]) + atoi(skor3[i]);
    //masukkan nilainya ke nilai akhir
      sprintf(sAkhir[i], "%d", sAkhirnya);
}
printf("Daftar Skor Pertandingan : \n");
printf("NO   NAMA\t     No.Peserta\t  SKOR1\t SKOR2\t SKOR3\t SKOR AKHIR\n");
for (i=1; i<=jumlah; i++){
        printf("%d   %3s\t     %3s\t  %3s\t %3s\t %3s\t %3s", i, nama[i], nomor[i], skor1[i], skor2[i], skor3[i], sAkhir[i]);
        printf("\n");}

return 0;

}
