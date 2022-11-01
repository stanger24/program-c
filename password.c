#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
 
int main(void) 
{
	char kata1[20], kata2[20], pass1[20], pass2[20];
	int cek1, cek2, a=0;
 	ulang: 
 
	strcpy(kata1,"rizky");
	printf("Login yang ke- %d\n", a+1); 
	printf("Masukkan Password : ",kata1);
	gets(pass1);
	strcpy(kata2,"andika");
	printf("Konfirmasi Password : ");
	gets(pass2); 
 
	cek1=strcmp(kata1,pass1); 
	cek2=strcmp(kata2,pass2); 
 
		if (cek1 == 0 && cek2 == 0)
			{
				printf("\n Password Anda Benar\n"); 
				system("pause");
			}else { a=a+1; 
		if(a<3) 
			{
				printf("\nPassword Anda Salah\n");
				goto ulang; 
			}else {
					printf("\nAkses Ditolak!\n");
					system("pause");
				}
					}
	}
