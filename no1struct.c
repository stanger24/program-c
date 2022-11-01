//Program Menampilkan Nama Dan nomor peserta
#include <stdio.h>
#include <string.h>
typedef struct Peserta{
	char nama [30];
	unsigned int nomor[10];
}biodataPeserta;
	
 int main(){
	biodataPeserta peserta01;
	strcpy (peserta01.nama, "RIZKY ANDIKA PUTRA");
	peserta01.nomor[10] = 22343011;
	printf("nama peserta  : %s\n",peserta01.nama);
	printf("nomor peserta : %d",peserta01.nomor[10]);	
	}


