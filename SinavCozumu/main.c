#include <stdio.h>
#include <stdlib.h>

int main()
{
  // dizi ornegi: dizi sayilarini tanimla ekrana yazdir ortalamayi bul

     /*int dizi[5] = {17,5,8,16,1};
    int i;
    double ort;
    for(i=0; i<5; i++)
    {
        toplam=toplam+dizi[i];
        printf("dizi[%d] = %d \n", i, dizi[i]);

    }

ort = (double)toplam/5;
ort=toplam/5.0;
printf("ort= %lf \n", ort);*/

    //DIZI SINAV COZUM://
    int matris[4][4],i,j,csatir=0,csutun=0,sayi,tsatir=1,tsutun=0,max_indis,toplam;
    double max_ortalama=0;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("8 tek 8 cift sayi giriniz:");
            scanf("%d",&sayi);

            if(matris[csatir][csutun]%2==0)
            {
                matris[csatir][csutun]=sayi;
                csutun++;
                if(csutun>=4)
                {
                    csutun=0;
                    csatir=csatir+2;
                }
            }

            else
            {
                matris[tsatir][tsutun]=sayi;
                tsutun++;
                if(tsutun>=4)
                {
                    tsutun=0;
                    tsatir=tsatir+2;
                }
            }
        }
    }

for(i=0;i<4;i++)
{
    toplam=0;
    for(j=0;j<4;j++)
    {
      toplam+=  matris[i][j];

      if(max_ortalama<toplam/4)
      {
          max_ortalama=(double)toplam/4;
          max_indis=i;
      }
    }
    printf("\n en buyuk ortalama %.2f ve satir indisi %d\n",max_ortalama,max_indis);
}






















    return 0;
}
