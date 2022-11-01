#include<stdio.h>
main()
{
int opmenu;
float panjang,lebar,alas,tinggi,radius,luassegitigasiku,luas_lingkaran,luas_persegipanjang;
printf("\n======================================= \n\n");
printf("\tPROGRAM PENGHITUNG KELILING & LUAS\n");
printf("nama : nurhasanah\n");
printf("nim  : 22018055"  );
printf("\n======================================= \n\n");
printf("=== MENU ===\n");
printf("[1] Menghitung luas persegi panjang \n");
printf("[2] Menghitung keliling lingkaran\n");
printf("[3] Menghitung luas segitiga siku-siku\n");
printf("Masukkan pilihan anda : ");
scanf("%d",&opmenu);
printf("\n");
switch(opmenu)
{
case 1:
printf("=== Menghitung luas persegi panjang ===");
printf("\nMasukkan panjang  \t = ");
scanf("%f",&panjang);
printf("\nMasukkan lebar  \t = ");
scanf("%f",&lebar);
luas_persegipanjang = panjang * lebar;
printf("\nluas persegi panjang tersebut adalah%.2f",luas_persegipanjang);
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
printf("=== Menghitung luas segitiga siku siku ===");
printf("\nMasukkan Alas \t = ");
scanf("%f",&alas);
printf("\nMasukkan tinggi \t = ");
scanf("%f",&tinggi);
luassegitigasiku = 0.5 * alas * tinggi;
printf("\n Luas segitiga siku siku tersebut adalah%.2f",luassegitigasiku);
printf("\n");
break;
default:
printf("Menu yang anda masukkan salah!");
break;
}
}
