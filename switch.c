#include<stdio.h>
main()
{
int opmenu;
float
sisi,volume_kubus,radius,luas_lingkaran,tinggi_tabung,volume_tabung;
printf("\n======================================= \n\n");
printf("\tPROGRAM PENGHITUNG VOLUME & LUAS\n");
printf("\n======================================= \n\n");
printf("=== MENU ===\n");
printf("[1] Menghitung volume kubus\n");
printf("[2] Menghitung luas lingkaran\n");
printf("[3] Menghitung volume tabung\n");
printf("Masukkan pilihan anda : ");
scanf("%d",&opmenu);
printf("\n");
switch(opmenu)
{
case 1:
	printf("=== Menghitung volume kubus ===");
printf("\nMasukkan panjang sisi \t = ");
scanf("%f",&sisi);
volume_kubus = sisi * sisi * sisi;
printf("\nVolume kubus tersebut adalah%.2f",volume_kubus);
printf("\n");
break;
case 2:
printf("=+= Menghitung luas lingkaran =+=");
printf("\nMasukkan radius = ");
scanf("%f",&radius);
luas_lingkaran = 3.14 * radius * radius;
printf("\nLuas lingkaran tersebut adalah%.2f",luas_lingkaran);
printf("\n");
break;
case 3:
printf("=== Menghitung volume tabung ===");
printf("\nMasukkan radius \t = ");
scanf("%f",&radius);
printf("\nMasukkan tinggi tabung \t\t = ");
scanf("%f",&tinggi_tabung);
volume_tabung = 3.14 * radius * radius *tinggi_tabung;
printf("\nVolume tabung tersebut adalah%.2f",volume_tabung);
printf("\n");
break;
default:
printf("Menu yang anda masukkan salah!");
break;
}
}
