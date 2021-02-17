#include <stdio.h>
#include <stdlib.h>
#define m 2
#define n 3
int main()
{


//YÝLDÝZ PÝRAMÝDÝ

    /*
       int i,j,k;
       int yildiz=1,bosluk,boyut;
       printf("boyut giriniz :");
       scanf("%d",&boyut);
       bosluk=boyut-1;
      for(i=1;i<=boyut;i++)
      {
     for(j=1;j<=bosluk;j++)
     {
         printf(" ");
     }
    for(k=1;k<=yildiz;k++)
    {
      printf("*");
    }
    printf("\n");
    yildiz=yildiz+2;
    bosluk--;
      }

      //SAYÝ PÝRAMÝDÝ

    int i,j,k;
    int yildiz=1,bosluk,boyut;
    printf("boyut giriniz :");
    scanf("%d",&boyut);
    bosluk=boyut-1;
    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=bosluk; j++)
        {
            printf(" ");
        }
        for(k=1; k<=yildiz; k++)
        {
            printf("%d",k);
        }
        printf("\n");
        yildiz=yildiz+2;
        bosluk--;
    }

    //ÝCÝ BOS BAKLAVA DÝLÝMÝ

    int i,j,k;
    int bosluk,yildiz=1,boyut,bos=0;
    printf("boyut gir:");
    scanf("%d",&boyut);
    bosluk =boyut-1;
    for(i=1;i<=boyut;i++)
    {
        for(j=1;j<=bosluk;j++)
        {
            printf(" ");
        }

            printf("*");

        for(k=1;k<=bos;k++)
        {
          printf(" ");
        }
       printf("*");
        printf("\n");
        bosluk--;
        bos=bos+2;

    }

    int bos1,bosluk1=0;

    bos1=boyut*2-1;
     for(i=1;i<=boyut;i++)
    {
        for(j=1;j<=bosluk1;j++)
        {
            printf(" ");
        }

            printf("*");

        for(k=1;k<=bos1;k++)
        {
          printf(" ");
        }
       printf("*");
        printf("\n");
        bosluk1++;
        bos1=bos1-2;

    }

//ÝCÝ BOS KUM SAATÝ

int bos1,bosluk1=0,boyut,i,j,k,bosluk,bos;
printf("boyut gir:");
scanf("%d",&boyut);
    bos1=boyut*2-1;
    bos=0;
    bosluk=boyut-1;
     for(i=1;i<=boyut;i++)
    {
        for(j=1;j<=bosluk1;j++)
        {

             printf(" ");

        }

            printf("*");


        for(k=1;k<=bos1;k++)
        {if(i==1)
        {
            printf("*");
        }
        if(i!=1)
        {
          printf(" ");
        }

        }
       printf("*");
        printf("\n");
        bosluk1++;
        bos1=bos1-2;

    }

    for(i=1;i<=boyut;i++)
    {
        for(j=1;j<=bosluk;j++)
        {
            printf(" ");
        }
        printf("*");
        for(k=1;k<=bos;k++)
        {
            if(i==boyut)
            {
                printf("*");
            }
            if(i!=boyut)
            {int main(void)
{/
                printf(" ");
            }

        }
        printf("*");
        printf("\n");
        bos=bos+2;
        bosluk--;
    }



    char s[40],gecici;
    int i,k=0;
    printf("bir seyler yaziniz:  ");
    gets(s);
    printf("metin dizisi:  %s\n",s);
    while(s[k]!='\0')
    {
        k++;

        for(i=0;i<k/2;i++)
        {
            gecici=s[k-i-1];
            s[k-i-1]=s[i];
            s[i]=gecici;
        }

 printf("tersten metin dizisi:  %s\n",s);
    }


//KULLANÝCÝDAN BÝR SAYÝ AL DÝZÝNÝN ÝCÝNDEMÝ DEGÝLMÝ
int x,i;
int dizi[]={1,2,3,4,5,6};
printf("bir sayi giriniz:");
scanf("%d",&x);
int boyut=sizeof(dizi)/sizeof(int);
for(i=0;i<boyut;i++)
{if (dizi[i]==x)
{
    printf("tebrikler sayiyi dogru tahmin etiniz sayiniz:%d",dizi[i]);
}
else
    printf("malesef sayiyi tahmin edemediniz:");
break;
}


//DÝZÝDEKÝ EN BUYK SAYÝYÝ BULMA
int dizi[]={0,2,7,6,45,4};
int enb=dizi[0],i;
int boyut=sizeof(dizi)/sizeof(int);
for(i=0;i<boyut;i++)
{
   if(enb<dizi[i])
   {
       enb=dizi[i];
   }
}
printf("en buyuk eleman: %d",enb);


int hasta_veri[100][4]={{101,0,4,1},{112,2,1,0},{107,4,3,0},{257,1,0,0},{158,3,4,1}};
void hastaindisbul(int x)
{    int i,j,k;


        for(j=0;j<40;j++)
        {
          if(x==hasta_veri[j][0])
          {

               printf(",hasta no %d\n,hasta saglik guvencesi%d\n,hastanin kardes sayisi%d\n,hastanin tedavi turu %d\n",hasta_veri[j][0],hasta_veri[j][1],hasta_veri[j][2],hasta_veri[j][3]);



          }

        }

           if(x!=hasta_veri[j][0])
            {
               printf("hasta kimlik no bulunamadi");
            }




}
void  muayeneucrethesapla(int x)
{ int i,j,ucret;


        for(j=0;j<40;j++)
        {
          if(x==hasta_veri[j][0])
          {
          if(hasta_veri[j][1]==0)

          {
               if(hasta_veri[j][3]==1)
           ucret=300-hasta_veri[j][2]*10;
           else
           {
            ucret=100-hasta_veri[j][2]*10;
           }

          printf("ucret:%d",ucret);
          }
          else if(hasta_veri[j][1]==1)
          {
               if(hasta_veri[j][3]==1)
           ucret=150 - hasta_veri[j][2]*10;
           else
          {
            ucret=50-hasta_veri[j][2]*10;
          }
          printf("ucret :%d",ucret-ucret*20/100);
          }
           else if(hasta_veri[j][1]==2)
          {

           ucret=0;
          printf("ucret :%d",ucret);
          }
           else if(hasta_veri[j][1]==3)
          {
              if(hasta_veri[j][3]==1 && hasta_veri[j][2>=3])
           {
               ucret=150-10;
           }
           else
          {
           ucret=50-hasta_veri[j][2]*10;
          }

          printf("ucret:%d",ucret-ucret*10/100);
          }
           else
          {


           ucret=0;
          printf("ucret:%d",ucret);
          }
        }



}
}

int main()
{int y;
    printf("hasta no giriniz:");
scanf("%d",&y);
 hastaindisbul(y);
 muayeneucrethesapla(y);
    return 0;
}

int matrix[2][3]={{1,2,3,},{4,5,6}};
int satir = sizeof (matrix)/sizeof(matrix[0]);
int sutun = sizeof(matrix[0])/sizeof(matrix [0][0]);
int k=sizeof(matrix[0][0]);
printf("%d,%d,%d",satir,sutun,k);


char cumle [100];
char kelime[10];
printf("cumle giriniz:");
gets(cumle);
printf("kelime giriniz:");
gets(kelime);
int karaktersayisi=kelimeara(cumle,kelime);
printf("\n bulunan karakter sayisi :%d",karaktersayisi);

return 0;

}
int mystrlen(char A[])
{
    int boyut =0;
    while(A[boyut]!=0)
    {
        boyut++;
    }
    return boyut;
}

int kelimeara(char cum[],char kel[])
{
    int i,j,sayac=0;
    int l1=mystrlen(cum);
    int l2=mystrlen(kel);
    printf("cumle uzunlugu :%d\n\n kelime uzunlugu :%d\n",l1,l2);
    for(i=0;i<=l1-l2;i++)
    {
        if(cum[i]==kel[0])
        {
            sayac=1;
            for(j=0;j<=l2;j++)
            {
                if(cum[i+j]==kel[j])
                {
                    sayac++;
                }
                else
                {
                    break;
                }
            }
        }
    }
    if(sayac==l2)
    {
        printf("\n %c kelimesi bulundu.\n",kel);
    }
    return sayac;
}

srand (time(NULL));

int A[m][n],B[n][m],C[n][m];
int i,j,k,t;
int toplam=0;
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        A[i][j]=1+rand()%5;
    }

}
printf("A  MATRÝSÝ:\n");
matrisyazdir(A ,m,n);
for(i=0;i<m;i++)
{
    for(j=0;j<m;j++)
    {
        B[i][j]=1+rand()%5;
    }

}
printf("\n\nB MATRÝSÝ\n");
matrisyazdir(B,n,m);
for(i=0;i<m;i++)
{
    for(j=0;j<m;j++)
    {
        for(k=0;k<n;k++)
        {
            toplam+=A[i][k]*B[k][j];
            //SATÝRÝN TUM SUTUNLARÝNÝ GEZMEK ICIN KULLANÝYORUZ

        }
        C[i][j]=toplam;
        toplam=0;
    }
    printf("\n");
}
printf("\n C MATRÝSÝ :\n");
matrisyazdir(C,m,n);
return 0;
}
void matrisyazdir(int matris[][1],int satir,int sutun)
{
    int i,j;
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("%4d ",matris[i][j]);
        }
        printf("\n");
    }
}


// tek mi cift oldugunu bulan program
int a,diziadi[n];
printf("bir sayi giriniz:");
scanf("%d",&a);

tek_mi_cift_mi(a);

printf("\nkaresi:%d",karehesapla(a));
toplameb(diziadi,n);
return 0;
}
void tek_mi_cift_mi(int x)
{
    if(x%2==0)
    {
        printf("cift");
    }
    else
    {
        printf("tek");
    }
}
int karehesapla(int x)
{
    int sonuc;
    sonuc=x*x;
    return sonuc;
}

void toplameb(int dizi[],int boyut)
{int toplam=0,i,j;
  for(i=0;i<boyut;i++)
  {
      printf("bir sayi giriniz:");
      scanf("%d",&dizi[i]);
  }
  int enb=dizi[0];
  for(j=0;j<boyut;j++)
  {
      if(enb<dizi[j])
      {
          enb=dizi[j];

      }
      toplam+=dizi[j];

  }
  printf("en buyuk:%d\n toplam:%d",enb,toplam);
}

*/























































