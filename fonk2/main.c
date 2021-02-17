#include <stdio.h>
#include <stdlib.h>
#define n 5
#define m 3
void maximumbul(int dizi[],int boyut)
{int max=0;
   for(int i=1;i<=boyut;i++)
   {
       printf("%d degeeri ",i);
       scanf("%d",&dizi[i]);
    if(dizi[i]>max)
    {
        max=dizi[i];
    }

   }

    printf("maximum sayi =%d ",max);


}
double orthesapla(int notoku[],int boyut2)
{
  int toplam=0;
  for(int i=1;i<=boyut2;i++)
  {
      toplam+=notoku[i];
  }
  double ort=toplam/boyut2;
  printf("sinir ortalamasi:%lf",ort);
  return ort;
}
int main()
{ int diziadi[n],dizi2[m];
    maximumbul(diziadi,n);
    orthesapla(dizi2,m);
    return 0;
}
