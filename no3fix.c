#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct peserta{
	char nama[30];
	char nomor[10];
}PESERTA;

typedef struct lomba{
	char nampes[30];
	char start[10];
	char finish[10];
}LOMBA;

typedef struct waktulomba{
	char waktu[10];
	char catatanwaktu[10];
}LAMALOMBA;
int main(){
	PESERTA peserta1;
	LOMBA lomba1;
	LAMALOMBA lamlomba1;
	
	strcpy (peserta1.nama,"RIZKY ANDIKA PUTRA");
	strcpy (peserta1.nomor,"22343011");
	printf("Nama Peserta  : %s \n",peserta1.nama);
	printf("Nomor Peserta : %s \n \n",peserta1.nomor);
	
	strcpy(lomba1.start, "00:00:00");
	strcpy(lomba1.finish,"00:15:45");
	printf("Waktu start  : %s\n",lomba1.start);
	printf("Waktu finish : %s\n",lomba1.finish);
	
	strcpy(lamlomba1.catatanwaktu,"00:15:45");
	printf("Catatan waktu :%s",lamlomba1.catatanwaktu);
}
