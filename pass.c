#include <stdio.h>
#include <string.h>
#define PASS "saya suka"
int main(){
    int hasil;
    char urpass[10];//password yang akan diinputkan
    printf("Nama\t: Rizky Andika Putra\nNim\t: 22343011\n");
    printf("---Program check password---\n");
        for(int i=0 ; i<3 ; i++){
            printf("Masukkan password anda :");gets(urpass);
            hasil = strcmp (PASS,urpass);
        if (hasil == 0)
            {
                printf("Password benar, silahkan masuk\n");
                break;
            } else{ if (i==2)
            {
                printf("Anda sudah memasukkan password salah sebanyak 3x, silahkan coba lagi nanti!!!");
            } else {
                        printf("Password salah, silahkan ulangi\n\n");
                    }
                    }
            }
        return 0;
 }
