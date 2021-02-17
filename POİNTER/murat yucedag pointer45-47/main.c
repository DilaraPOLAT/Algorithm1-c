#include <stdio.h>
#include <stdlib.h>

int main()
{
   //DERS 1:
   /*
   int sayi=10;
   int sayi2=20;
   double sayi3=10.25;
   char kelime='a';
   printf("%d\n",sayi);
   printf("%d\n",sayi2);
   printf("%lf\n",sayi3);
   printf("%c\n",kelime);

   printf("BELLEK ADRESLERÝ\n");
   printf("%x\n",&sayi);
   printf("%x\n",&sayi2);
   printf("%x\n",&sayi3);
   printf("%x\n",&kelime);

//DERS 2:
int sayi=20;
int *s;&sayi;
printf("%d\n",sayi);
printf("%x\n",s);

char harf='a';
char *h=&harf;
printf("harf:%c\n",harf);
printf("harf adres:%x\n",h);
*/
// DERS 3:
char harf='a';
char *pt;
pt=&harf;
printf("%x\n",pt);
pt++;
printf("%x\n",pt);
pt--;
printf("%x\n",pt);

    return 0;
}
