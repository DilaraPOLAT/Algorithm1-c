#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i=0,j,x,toplam=0;
 float ort;
printf("bir sayi giriniz:");
  scanf("%d",&x);
    toplam=toplam+x;
  while(x>=0)
 {

     i++;
     if(x<0)
     {
      printf("toplam:%d",toplam);
       ort=toplam/i;

       break;
     }
     printf("bir sayi giriniz:");
      scanf("%d",&x);
      toplam=toplam+x;

 }

    return 0;
}
