#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//DÝLARA SEVÝM POLAT 19010011064
int main()
{
    int i,z,x,y,sonuc2,sonuc3=1;
    double logsonuc,logsayisi;
    float a,b,sonuck;
    float sonuc1;
    char islem;
    char devammi;
    printf("***Dilara sevim polat in hesap makinasina hosgeldiniz***!!!\n");
    do
    {
    printf("Basit hesap makinasi icin: 1\nGelismis hesap makinasi icin:2 \n");
    scanf("%d",&z);
    if (z==1)
    {
    printf("Toplama icin:+\nCikarma icin:-\nCarpma icin:*\nBolme icin:/\nbasabilirsiniz:\n");
    islem=getch();

    if(islem=='+')
    {
        printf("a sayisina giriniz:");
        scanf("%f",&a);
        printf("b sayisina giriniz:");
        scanf("%f",&b);
        sonuc1=a+b;
        printf("sonuc1=%.0f",sonuc1);
    }
    else if(islem=='-')
    {
        printf("a sayisina giriniz:");
        scanf("%f",&a);
        printf("b sayisina giriniz:");
        scanf("%f",&b);
        sonuc1=a-b;
        printf("sonuc1=%.0f",sonuc1);
    }
    else if(islem=='*')
    {
        printf("a sayisina giriniz:");
        scanf("%f",&a);
        printf("b sayisina giriniz:");
        scanf("%f",&b);
        sonuc1=a*b;
        printf("sonuc1=%f",sonuc1);
    }
    else if(islem=='/')
    {
        printf("a sayisina giriniz:");
        scanf("%f",&a);
        printf("b sayisina giriniz:");
        scanf("%f",&b);
        sonuc1=a/b;
        printf("sonuc1=%f",sonuc1);
    }
     }
   if(z==2)
     {
        printf("Logaritma icin:l\nKarekok icin:k\nUs alma icin:u\nMod almak icin:%%\nbasabilirsiniz:\n");
        islem=getch();
        if(islem=='l')
      {


        printf("logaritma islemi icin sayi giriniz:");
        scanf("%lf",&logsayisi);
        logsonuc=log(logsayisi);
        printf("logsonuc:%.4lf",logsonuc);
      }

        if(islem=='k')
       {
        printf("x sayisina giriniz:") ;
        scanf("%d",&x);
        sonuck=sqrt(x);
        printf("sonuck=%.3f",sonuck);

       }

       if(islem=='%')
       {
        printf("x sayisina giriniz:");
        scanf("%d",&x);
        printf("y sayisina giriniz:");
        scanf("%d",&y);
        sonuc2=x%y;
        printf("sonuc2=%d",sonuc2);
       }
       if(islem=='u')
       {
        printf("x sayisina giriniz:");
        scanf("%d",&x);
        printf("y sayisina giriniz: ");
        scanf("%d",&y);

       for(i=1;i<=y;i++)
     {
        sonuc3=sonuc3*x;
       }
        printf("sonuc3=%d",sonuc3) ;
       }
     }
       printf("\nIsleme devam etmek icin E  veya e  basiniz\nDevam etmek istemiyorsaniz herhangi bir sayi veya harfe basiniz:\n");
       devammi=getch();
     }
      while(devammi=='E'|| devammi=='e');
      return 0;
     }
