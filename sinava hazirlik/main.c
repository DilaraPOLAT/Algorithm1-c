#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*int i ,c=0,a=1,b=1;
   printf("%d\t%d\t",a,b);
   for(i=0;i<=10;i++)
   {
     c=a+b;
       a=b;
     b=c;


       printf("%d\t",c);
   }


   int i;
   for(i=1;i<=50;i++)
   {

          if(i%5==0)
           {
             printf("%d\t",i);
           }

   }
    char ders;
    printf("please a string giriniz   ");
    scanf("%s",&ders);
    switch(ders)
    {
    case 'm':
        printf("matematik benden sorulur");
        break;
    case 'a':
        printf("algoritmadan AA alacam insallah");
        break;
    case 'e':
        printf("elektrikten korkma");
        break;
    case 'f':
        printf("lise fizigi yaparsin");
        break;
        default:printf("lutfen isledigin bir ders gir");


    }

int sayi1,sayi2,toplam;
char islem;
printf("bir sayi giriniz:");
scanf("%d",&sayi1);
printf("bir islem giriniz");
islem=getch();

printf("bir sayi daha gir:");
scanf("%d",&sayi2);


switch(islem)
{
    case '+' :toplam=sayi1+sayi2;
    printf("toplam=%d",toplam);
}


int sayilar[]={10,20,30,40,50,60},i,toplam=0;
int boyut=sizeof(sayilar)/sizeof(int);

for(i=0;i<boyut;i++)
{
    printf("%d . indisindeki deger%d\n",i,sayilar[i]);
toplam=toplam+sayilar[i];
}
printf("toplam dizi:\t%d",toplam);

*/
char sehir[15],i;
for(i=0;i<2;i++)
{
printf("bir sehir giriniz:");
scanf("%s",&sehir[i]);

}

for(i=0;i<2;i++)
{
    printf("%s",sehir[i]);
}



























    return 0;
}
