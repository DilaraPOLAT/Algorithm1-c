#include <stdio.h>
#include <stdlib.h>
// DERS 36  POÝNTER(FONKSÝYONLARÝN GOSTERÝCÝLERLE KULLANÝMÝ)
// ORNEK 1:
/*
void mesajyaz(int *x)
{
    int i;
    for(i=0;i<*x;i++)
    {
        printf("hello world\n");
    }
}

// ORNEK 2:
int carp(int *a,int *b)

{
    return *a*(*(b));
}
// ornek 3:

void degistir(int *a,int*b)
{

int gecicibellek;
gecicibellek=*a;
*a=*b;
*b=gecicibellek;

}
// ORNEK 4:
*/
int f(int *a)
{
    int i,faktoriyel=1;
    for(i=*a;i>=1;i--)
    {
        faktoriyel=faktoriyel*i;
    }
    return faktoriyel;

}




int main()
{
  /*
  int a;
  printf("bir sayi gir:");
  scanf("%d",&a);
  mesajyaz(&a);

int a,b;
printf("iki sayi giriniz:");
scanf("%d%d",&a,&b);
int sonuc=carp(&a,&b);
printf("%d*%d=%d",a,b,sonuc);


int x,y;
printf("iki sayi giriniz:");
scanf("%d%d",&x,&y);
printf("oncesi %d - %d\n",x,y);
degistir(&x,&y);
printf("sonrasi %d _ %d",x,y);
*/
int x;
printf("bir sayi giriniz:");
scanf("%d",&x);
int sonuc=f(&x);
printf("%d nin faktoriyeli : %d",x,sonuc);




//DERS 33:
  /* int sayi=10;
   printf("%d\n",sayi);
   printf("%p\n",&sayi);
   // ya da
   int sayi=10;
   int *ptr;
   ptr=&sayi;
   printf("%p",ptr);
   //ornek
   int sayi=10;
   int *ptr;
   ptr=&sayi;
   int sayi2=*ptr;
   printf("%d",sayi2);
   //ornek:

   int sayi=5;
   char karakter='a';
   float ondalik=5.4;
   int *p_sayi;
   char *p_karakter;
   float *p_ondalik;
   p_sayi=&sayi;
   p_karakter=&karakter;
   p_ondalik=&ondalik;
   printf("%d nin adresi:%p\n",sayi,p_sayi);
   printf("%c nin adresi:%p\n",karakter,p_karakter);
   printf("%.1f nin adresi :%p\n",ondalik,p_ondalik);
   // ORNEK:

int sayi=8;
int *p=&sayi;
printf("%x\n",p);
p++;
printf("%x\n",p);
p-=50;
printf("%x",p);

//DERS 34 DÝZÝLERÝN POÝNTRLER ÝLE YONETÝMÝ 2\4
// ORNEK 1:

int dizi[]={5,4,8,7,6};
int *ptr;
ptr=&dizi[0];
printf("dizinin 1. elemani :%d\n",dizi[0]);
printf("dizinin 1. elemani :%d\n",*ptr);
printf("dizinin 2. elemani :%d adresi :%d\n\n\n",*(ptr+1),(ptr+1));
int i;
for (i=0;i<5;i++)
{
    printf("dizinin [%d]:%d -adresi %d\n",i,*(ptr+i ),(ptr+i));

}

//DERS 35 POÝNTER KARAKTER DÝZÝLERÝN GOSTERÝCÝLERLE YONETÝMÝ 3\4
// ORNEK 1:

char isim[]="mehmet";
char isim2[]={'m','e','h','m','e','t','\0'};
printf("%s\n",isim);
printf("%s\n",isim2);

char *p;
p=&isim;
printf("%c\n",*(p+1));
char *sehir ="istanbul";
printf("%c",*(sehir+1));

ORNEK 2:

char *sehir="osmaniye";
int i=0;
while(sehir[i]!='\0')
{
  printf("%c _ adresi %p\n",*(sehir+i),(sehir+i));
  i++;
}

//YA DA
while(*sehir!=NULL)
{
    printf("%c_ %p \n",*(sehir),(sehir));
    sehir++;
}
//ORNEK 3:

char *sehirler[]={"adana","antalya","izmir","manisa"};
for(int i=0;i<sehirler[i]!='\0';i++)
{
 printf("%s adresi: %p\n",*(sehirler+i),(sehirler+i));
}

*/
















































    return 0;
}
