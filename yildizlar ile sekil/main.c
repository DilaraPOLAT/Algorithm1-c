#include <stdio.h>
#include <stdlib.h>

int main()
{  /* int x,j,i,bosluk,yildiz=1;
    printf("boyut giriniz:");
    scanf("%d",&x);
 bosluk=x-1;
for(i=1;i<=x;i++)
{
    for(j=1;j<=bosluk;j++)
    {
        printf(" ");
    }
    for(j=1;j<=yildiz;j++)
    {
        printf("*");
    }
    printf("\n");
    yildiz=yildiz+2;
    bosluk--;
}

bosluk=0;
yildiz=x+x-1;
for(i=1;i<=x;i++)
{
    for(j=1;j<=bosluk;j++)
    {
        printf(" ");
    }
    for(j=1;j<=yildiz;j++)
    {
        printf("*");
    }
    printf("\n");
    yildiz=yildiz-2;
    bosluk++;
}

int x,y;
printf("satir sayisi giriniz:");
scanf("%d",&x);
printf("boyut sayisi giriniz:");
scanf("%d",&y);
int matris1[x][y],matris2[x][y],i,j,matris3[x][y];
for(i=0;i<x;i++)
{
    for(j=0;j<y;j++)
    {
      printf("dizi elemani gir");
      scanf("%d",&matris1[i][j]);
    }
}
for(i=0;i<x;i++)
{
    for(j=0;j<y;j++)
    {
      printf("dizi elemani gir");
      scanf("%d",&matris2[i][j]);
    }
}

for(i=0;i<x;i++)
{
    for(j=0;j<y;j++)
    {
    matris3[i][j]=matris1[i][j]+matris2[i][j];

    }

}

int i,bas1,bas2,bas3,kalan1,sayac=1;

for(i=100;i<=999;i++)
{
    bas1=i%10;
    kalan1=(i-bas1)/10;
    bas2=kalan1%10;
    bas3=(kalan1-bas2)/10;
    if(bas1!=bas2&& bas2!=bas3 && bas1!=bas3)
    {
        sayac++;
    }

}
printf("%d",sayac);




int bakteri=1,i;
for(i=1;i<=5;i++)
{
    bakteri=bakteri*2;
}
printf("%d",bakteri);

int x,toplam=0,i;
for(i=1;i<=4;i++)
{
 printf("bir sayi giriniz:");
scanf("%d",&x);
toplam=toplam+x;
}
printf("%d",toplam);


int x,toplam=0;
do
{
    printf("bir sayi giriniz:");
    scanf("%d",&x);
toplam=toplam+x;
}
while(x!=0);

printf("toplam:%d",toplam);


int x,toplam=0;

while(x!=0)
{   printf("bir sayi giriniz:");
scanf("%d",&x);

    toplam=toplam+x;

}
printf("toplam:%d",toplam);



int x;
printf("kac saat otoparkta kaldiniz?");
scanf("%d",&x);
if(x>=1&&x<=4)
{
  printf("ucret:10");
}
else if(x>=5&&x<=8)

{
   printf("ucret:12");
}
else if(x>=9&&x<=12)
{
   printf("ucret:15");
}
else
{
  printf("ucret:20");
}






int i,toplam=0;
for(i=1;i<=81;i=i+4)

{
    toplam=i+toplam;
}
printf("toplam:%d",toplam);




int dizi[10]={2,1,0,0,2,1,1,2,1,0},i,puan=0;

for(i=0;i<10;i++)
{
    if(dizi[i]==2)
    {
        puan=puan+3;
    }
     else if(dizi[i]==0)
     {
         puan=puan+1;
     }
     else//maglubiyet//
        puan=puan+0;

}
if(puan>=12)
{
    printf("kume dusmediniz tebrikler\n puaniniz :%d",puan);
}

else
    printf("kume dustunuz kaybetiniz \n puaniniz:%d",puan);


int elb,normalb,fazlalik,fazlalikn,toplame=0,toplamn=0,ucret;
printf("el bagaji giriniz:");
scanf("%d",&elb);
printf("normal bagaj giriniz:");
scanf("%d",&normalb);
if(elb>8)
{
    fazlalik=elb-8;
    toplame=fazlalik*4;
}
else if(normalb>15)
{
    fazlalikn=normalb-15;
    toplamn=fazlalikn*5;
}

ucret=toplamn+toplame;
printf("toplam ucretiniz :%d",ucret);



int x,y,toplam=0,i;

   printf("bir sayi giriniz.");
   scanf("%d",&x);
    printf("bir sayi giriniz.");
   scanf("%d",&y);
if(x==y)
{
   printf("bir sayi giriniz.");
   scanf("%d",&x);
    printf("bir sayi giriniz.");
   scanf("%d",&y);
}

if(x>y)
{
    for(i=y;i<=x;i++)
    {
        toplam=toplam+i;
    }
}

if(y>x)
{
    for(i=x;i<=y;i++)
    {
        toplam=toplam+i;
    }
}


printf("toplam:%d",toplam);

int  yaz,kis,ilk,son,toplam=0;
kis=320;
ilk=320/4;
yaz=ilk*8;
son=yaz/10;
toplam=ilk+kis+son+yaz;
printf("sonuc:%d",toplam);
*/










































    return 0;
}







