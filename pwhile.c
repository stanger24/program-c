#include<stdio.h>

#include<math.h>
main()
{
            printf(">>>>>> MENCARI PEMANGKATAN BILANGAN <<<<<<\n\n");
            int x,n,i,h;
            i=1;
            printf("Bilangan Yang Akan Dipangkatkan (x) = ");
            scanf("%d",&x);
            printf("Bilangan Maksimum Yang Akan Menjadi Pangkat (n) = ");
            scanf("%d",&n);
            while(i<=n)
            {
                        h=pow(x,i);
                        printf("%d ",h);
                        i++;
            }
}

