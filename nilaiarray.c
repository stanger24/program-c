#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 

void nujian(float nuas, float nuts,  float ntugas, float nkuis); 
float ntotal;
char huruf;
int j, jml;
float a, b, c, d ; 
struct data {
int no;
char nim[9];
char nama[25];
char makul[37];
} mahasiswa;
int main (void)
{
	printf("Masukkan jumlah mahasiswa : ");
	scanf_s("%d",&jml);

for (j=1; j<=jml; j++){ //Perulangan
printf("Data Mahasiswa ke %dnn",j);
mahasiswa.no=j;
printf("ntData Mahasiswa");
gets_s(mahasiswa.nim);//Input string
printf("ntMasukkan NIM         : ");
gets_s(mahasiswa.nim);//Input string
printf("tMasukkan Nama        : "); //Fungsi menampilkan input
gets_s(mahasiswa.nama); //Input string
printf("tMasukkan Mata kuliah : ");
gets_s(mahasiswa.makul);//Input string
printf("tMasukkan Nilai UAS   : ");
scanf_s("%f",&a); //scanf_s("%d",&nim); //Fungsi untuk meminta/menerima nilai yang dikonversikan menjadi nilai int
printf("tMasukan Nilai UTS    : ");
scanf_s("%f",&b);
printf("tMasukan Nilai Tugas  : ");
scanf_s("%f",&c);
printf("tMasukan Nilai Kuis   : ");
scanf_s("%f",&d);
nujian(a,b,c,d); //Memberikan nilai pada variabel a,b,c,dan d
}

system("pause");
return(0); //Nilai balikan fungsi main() adalah 0
}

void nujian(float nuas, float nuts, float ntugas, float nkuis)//Definisi fungsi nujian
{
ntotal=(nuas*0.4)+(nuts*0.3)+(ntugas*0.2)+(nkuis*0.1); //Fungsi perhitungan
printf("ntJumlah Rata2x Nilai adalah : %.2fn",ntotal); //Fungsi menampilkan

if (ntotal>=85) huruf='A';    //Fungsi Logika, jika total nilai besar dari sama dengan 85, maka nilai huruf A
else if (ntotal>=70) huruf='B';//jika total nilai besar dari sama dengan 70, maka nilai huruf B
else if (ntotal>=60) huruf='C';//jika total nilai besar dari sama dengan 60, maka nilai huruf C
else if (ntotal>=50) huruf='D';//jika total nilai besar dari sama dengan 50, maka nilai huruf D
else huruf='E';//jika total nilai kecil dari 50, maka nilai huruf E

printf("ntIndeks Nilai MahasiswantAtas Nama %s adalah  : %cn",mahasiswa.nama,huruf);//Fungsi menampilkan nilai huruf
printf("ntKeterangan :");
if (ntotal >= 60){ //Fungsi pernyataan, jika total nilai besar dari sama dengan 60
printf("ntMahasiswa tersebut        : Lulusnn");//Keterangan anda Lulus
}
else if (ntotal < 60) { //Fungsi logika, jika total nilai kecil dari 60
printf("ntMahasiswa tersebut           : Gagalnn");//Keterangan anda Gagal
}
printf("========================================================nn");
}
