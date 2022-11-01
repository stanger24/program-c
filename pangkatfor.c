#include<stdio.h>

int main(void)
{
    int a,x,y,total=1;

    printf("Isi Angka yang Akan Dipangkatkan : ");
    scanf("%i", &x);
    printf("Pangkat :");
    scanf("%i", &y);

    for(a=1;a<=y;a++){
        total=total*x;
    }
    printf("Hasilnya adalah %d", total);
    return 0;
}
