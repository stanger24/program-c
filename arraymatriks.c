#include<stdio.h>
int main()
{
   int baris, kolom, i, j, matrik1[10][10], matrik2[10][10], jumlah[10][10];
 
   printf("Nama : Rizky Andika Putra\n");
   printf("NIM  : 22343011\n");
   printf("==============================================\n\n");
   printf("Input jumlah baris matrik : "); 
   scanf("%d", &baris);
   printf("Input jumlah kolom matrik : "); 
   scanf("%d", &kolom);
   
   printf("\nInput nilai matrik 1 :\n");
   for (i = 0; i < baris; i++){
      for (j = 0; j < kolom; j++){
      printf("Input Matriks 1[%d][%d]: ",i+1,j+1);
  scanf("%d",&matrik1[i][j]);
      }
   }
   
   printf("\n Matrik 1 : \n");
   for (i=0; i< baris; i++){
    for (j=0; j<kolom; j++){
     printf("%3d", matrik1[i][j]);
    }
    printf("\n");
   }
}
