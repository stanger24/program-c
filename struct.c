/* array of struct*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2

typedef struct peserta{
	char nama[30];
	char noPeserta[5];
}PESERTA;

typedef struct waktu{
	int jam;
	int menit;
	int detik;
}WAKTU;

typedef struct lomba{
	PESERTA peserta;
	WAKTU start;
	WAKTU finish;
	WAKTU catwak;
}LOMBA;

 main(){
 	LOMBA lombaa[N];
 	int i,j;
 	
 	printf("\tPROGRAM DATA LOMBA MARATHON\n");
 	printf("\tNAMA : RIZKY ANDIKA PUTRA\n");
 	printf("\tNIM  : 22343011\n");
 	printf("========================================\n");
 	
 	printf("\tENTRY IDENTITAS PESERTA LOMBA\n");
 	for(i=0;i<N;i++){
 		printf("KETIKKAN NAMA PESERTA KE %d  : ",i+1);fflush(stdin);
 		gets(lombaa[i].peserta.nama);
 		printf("KETIKKAN NOMOR PESERTA      : ",i+1);fflush(stdin);
 		gets(lombaa[i].peserta.noPeserta);
 		printf("MASUKKAN WAKTU START        : ",i+1);fflush(stdin);
 		scanf("%d:%d:%d",&lombaa[i].start.jam ,&lombaa[i].start.menit ,&lombaa[i].start.detik);
 		printf("MASUKKAN WAKTU FINISH       : ",i+1);fflush(stdin);
 		scanf("%d:%d:%d",&lombaa[i].finish.jam, &lombaa[i].finish.menit, &lombaa[i].finish.detik);
 		printf("\n");
 		
 		int jumlahstart = (3600*lombaa[i].start.jam)+(60*lombaa[i].start.menit)+(60*lombaa[i].start.detik);
 		int jumlahfinish= (3600*lombaa[i].finish.jam)+(60*lombaa[i].finish.menit)+(60*lombaa[i].finish.detik);
 		
 		jumlahfinish-=jumlahstart;
 			lombaa[i].catwak.jam = jumlahfinish/3600;
 			lombaa[i].catwak.menit = jumlahfinish%3600/60;
 			lombaa[i].catwak.detik = jumlahfinish%3600%60;
 		
	 }
	 
	 printf("\tDATA HASIL PERLOMBAAN MARATHON\n");
	 printf("=======================================\n");
	 for(j=0;j<N;j++){
	 	printf("PESERTA KE %d",j+1);
	 	printf("\n");
	 	printf("NAMA PESERTA   : %s", lombaa[j].peserta.nama);
	 	printf("\n");
	 	printf("NOMOR PESERTA  : %s", lombaa[j].peserta.noPeserta);
	 	printf("\n");
	 	printf("WAKTU START    : %d:%d:%d", lombaa[j].start.jam, lombaa[j].start.menit, lombaa[j].start.detik);
	 	printf("\n");
	 	printf("WAKTU FINISH   : %d:%d:%d", lombaa[j].finish.jam, lombaa[j].finish.menit, lombaa[j].finish.detik);
	 	printf("\n");
	 	printf("CATATAN WAKTU  : %d jam %d menit %d detik", lombaa[j].catwak.jam, lombaa[j].catwak.menit, lombaa[j].catwak.detik);
	 	printf("\n\n");
	 }
	 return  0;
	 
	 
 	
}
