#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sonuc,x,c;
   printf("bir sayi giriniz:");
   scanf("%d",&a);
   printf("ikinci sayi giriniz:");
   scanf("%d",&b);
   do
   {
   printf("toplama icin 1 e cikarma icin 2 ye carpma icin 3 e bolme icin 4 e basiniz:");
   scanf("%d",&x);
   if(x==1)
   {
       sonuc=a+b;
        printf("sonuc:%d",sonuc);
   }
   else if(x==2)
   {
      if(a>=b)
      {
          sonuc=a-b;
      }
      else
      {
          sonuc=b-a;
      }
      printf("sonuc:%d",sonuc);

   }
   else if(x==3)
   {
       sonuc=a*b;
        printf("sonuc:%d",sonuc);

   }
   else
   {
       sonuc=a/b;
        printf("sonuc:%d",sonuc);
   }
   printf("prograa devam etmek icin 4 e basiniz:");
   scanf("%d",&c);
   }
   while(c==4);
    return 0;
}
