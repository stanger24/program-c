//program penampl waktu
#include <stdio.h>
typedef unsigned int jam;
typedef unsigned int menit;
typedef unsigned int detik;
int main(void){
 	jam a;
 	menit b;
 	detik c;
 	
 	printf("NAMA : RIZKY ANDIKA PUTRA\n");
 	printf("NIM  : 22343011\n");
 	printf("===================================\n");
 	
 	printf("Masukkan Jam   : "); scanf("%d",&a);
 	printf("Masukkan Menit : "); scanf("%d",&b);
 	printf("Masukkan Detik : "); scanf("%d",&c);
 
	 printf("\nWAKTU\n");
	 printf("Jam : %d \n",a); 
 	printf("Menit: %d \n",b); 
 	printf("Detik: %d \n",c); 
 	return 0;
}

