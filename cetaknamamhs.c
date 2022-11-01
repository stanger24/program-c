#include <stdio.h>
#include <conio.h>
/*deklarasi record mahasiswa*/
	struct mahasiswa { 
	long nim;
 	char nama[20];};
	struct mahasiswa mhs[3];
main()
{
	printf("Nama : Rizky Andika Putra\n");
    printf("NIM  : 22343011\n");
    printf("==============================================\n\n");
	int i;
	int a;
		printf("Input Data Mahasiswa\n");
		a=1;
	for(i=0;i<=2;i++)
{
	printf("Data ke-%d\n",a);
	printf("NIM = "); 
	scanf("%i",&mhs[i].nim);
	printf("Nama = "); 
	scanf("%s",&mhs[i].nama);
	printf("\n");
	a++;
} 
	printf("\nData Yang Telah Di inputkan\n");
	for(i=0;i<=2;i++)
{
	printf("%i%10s\n",mhs[i].nim,mhs[i].nama);
} 
 getche(); 
}
