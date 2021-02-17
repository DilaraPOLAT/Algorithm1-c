#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x,kalan,rakam,toplam=0;
  printf("bir sayi giriniz");
  scanf("%d",&x);
if(x>0)
  {
    kalan=x%10;
 rakam =kalan-x;
 toplam=toplam+rakam;
 printf("toplam:%d",toplam);
  }

    return 0;
}
