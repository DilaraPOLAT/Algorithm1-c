#include <stdio.h>
#include <stdlib.h>
 //SORU 196:
 /*
int kare_toplam(int a,int b)
{
    int karea,kareb,sonuc;
   karea= a*a;
   kareb= b*b;
   sonuc=karea+kareb;
   return sonuc;
}
int main()
{
   int x,y;
   printf("iki sayi giriniz:");
   scanf("%d%d",&x,&y);
   int kare_toplam(x,y);
   printf("sonuc:%d",kare_toplam(x,y));


   // ORNEK 1: A liranin yuzde cinsinden verilen n yillik faiz orani ile t yilda kac lira faiz getriecegini bulan program


    float x,n,t,sonuc;
     printf("x:");
     scanf("%f",&x);
     printf("faiz yuzdesi:");
     scanf("%f",&n);
     printf("kac yilik faiz");
     scanf("%f",&t);
     sonuc=(x*n+x)*t;
    printf("sonuc=%f",sonuc);

    // SORU 171:
    int A[2][3]={{5,6,2},{4,6,1}} , B[3][1]={5,4,3} , C[2][3];
    int i,j;
    for(i=0;i<2;i++)
    {
     for(j=0;j<3;j++)
     {
         C[i][j]=A[i][j]*B[i][j];
     }
    }
    for(i=0;i<2;i++)
    {
     for(j=0;j<3;j++)
     {
         printf("%d ",C[i][j]);
     }
     printf("\n");
    }

// soru 173:

int dizi1[3],dizi2[3],dizi3[3],i=0,eb[3],ek[3],ort[3];

for(i=0;i<3;i++)
{
printf("1. tarih:",dizi1[i]);
scanf("%d",&dizi1[i]);
}
for(i=0;i<3;i++)
{
printf("2.tarih:",dizi2[i]);
scanf("%d",&dizi2[i]);
}

for(i=0;i<3;i++)
{
printf("3.tarih:",dizi3[i]);
scanf("%d",&dizi3[i]);
}

for(i=0;i<3;i++)
{
    if(dizi1[i]>dizi2[i]||dizi1[i] >dizi3[i])
    {
      eb[i]=dizi1[i];
    }
    else if(dizi2[i]>dizi1[i]||dizi2[i] >dizi3[i])
    {
      eb[i]=dizi2[i];
    }
    else if(dizi3[i]>dizi2[i]||dizi3[i] >dizi3[i])
    {
      eb[i]=dizi3[i];
    }

}

for(i=0;i<3;i++)
{
    printf("%d.",eb[i]);

}

for(i=0;i<3;i++)
{
    printf("%d.",ort[i]);

}
for(i=0;i<3;i++)
{
    printf("%d.",ek[i]);

}
/*
//soru 220
char k[10];
int sayac=0,i;
printf("cumle giriniz:");
scanf("%s",k);
int m=sizeof(k)/sizeof(char);

for(i=0;i<m;i++)
{
    if(k[i]=='e' || k[i]=='a'||k[i]=='i' ||k[i]=='ý'||k[i]=='u'||k[i]=='ü'||k[i]=='o'||k[i]=='ö')
    {
        sayac++;
    }
}
printf("girilen sesli harf sayisi:%d\n",sayac);

//SORU 259:

int dizi[10]={1,25,4,6,14,8,3,1,15,29},ey=1000,i,a,yakin,m;
double ort,toplam=0;
for(i=0;i<10;i++)
{
   toplam=dizi[i]+toplam;
}
 ort=toplam/10;
 for(i=0;i<10;i++)
 {
     if(ort>=dizi[i])
     {
      a =ort-dizi[i];
       if(a<ey)
       {
           ey=a;
           yakin=dizi[i];
           m=i;
       }
     }
     else
      {
        a =dizi[i]-ort;
         if(a<ey)
       {
           ey=a;
           yakin=dizi[i];
           m=i;
       }

      }

 }

printf("ortalama=%lf\n en yakin%d\n indisi %d",ort,yakin,m);

//SORU 257:
int dizi[10]={1,5,5,2,8,6,3,7,10,45},dizis[10];
int i,k=0;
for(i=0;i<10;i++)
{
    if(dizi[i]%2==0)
    {

        dizis[k]=dizi[i];
        k++;
    }


}

for(i=0;i<k;i++)
{
 printf("%d ",dizis[i]);
}*/
























    return 0;
}
