#include <stdio.h>
#include <stdlib.h>
//DÝLARA SEVÝM POLAT   19010011064
typedef struct dersler
{
    char dersadi[50];
    int vizenot;
    int finalnot;
} ders;
typedef struct ogrenciler
{
    ders *drs;
    char ad[20];
    char soyad[20];
    int drssayisi;
    int numara;
} ogrenci;
void ogrenci_ara(ogrenci*,int);
void durum_goster(ogrenci *,int);
void listele(ogrenci*,int);
int main()
{
    char devammi;
    int x,i,j,a,k;
    printf("kac ogrenci girilecek:");
    scanf("%d",&x);
    ogrenci*ptr=( ogrenci*)malloc(x*sizeof(ogrenci));

    for(i=0; i<x; i++)
    {
        printf("%d.ogrencinin bilgileri:\n",i+1);
        printf("ad:");
        scanf("%s",(ptr+i)->ad);
        printf("soyad:");
        scanf("%s",(ptr+i)->soyad);
        printf("numara:");
        scanf("%d",&(ptr+i)->numara);
        printf("ogrencinin ders sayisi:");
        scanf("%d",&a);
        (ptr+i)->drssayisi=a;
        (ptr+i)->drs=(ders*)malloc(a*sizeof( ders));

        for(j=0; j<a; j++)
        {
            printf("%d.ders adi:",j+1);
            scanf("%s",((ptr+i)->drs+j)-> dersadi);
            printf("vize notu:");
            scanf("%d",&((ptr+i)->drs+j)->vizenot);
            printf("final notu:");
            scanf("%d",&((ptr+i)->drs+j)->finalnot);
        }
    }
    do
    {
        printf("*******************************************\n-ogrenci ara fonksiyonu icin :1\n-durum goster fonksiyonu icin:2\n-listele fonksiyonu icin:3\n-cikis fonksiyonu icin :4\n*******************************************\n");
        scanf("%d",&k);
        if(k==1)
        {
            ogrenci_ara(ptr,x);
        }
        else if(k==2)
        {
            durum_goster(ptr,x);
        }
        else if(k==3)
        {
            listele(ptr,x);
        }
        else if(k==4)
        {
            printf("programdan ciktiniz.....\n");
            break;
        }

        printf("fonksiyon listesini tekrar gormek icin A VEYA a ' ya basiniz:\n");
        devammi=getch();
    }

    while(devammi=='A' || devammi=='a');
    return 0;
}

void ogrenci_ara(ogrenci *p,int m)
{
    int i,j,k,l,t,sayac=0,s;
    char isim[20],*pi;
    printf("aranacak ogencinin adini giriniz:");
    scanf("%s",&isim);
    pi=isim;
    for(i=0; i<20; i++)
    {
        if(pi[i]=='\0')
        {
            k=i;
            break;
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<k; j++)
        {
            if(pi[j]==((p+i)->ad[j]))
            {

                sayac++;
                if(sayac==k)
            {
                    printf("%d .ogrencinin bilgileri:\n",i+1);
                    printf("\nad:%s\n",(p+i)->ad);
                    printf("soyad:%s\n",(p+i)->soyad);
                    printf("numara: %d\n",(p+i)->numara);
                    printf("derssayisi:%d\n",(p+i)->drssayisi);
                    for(l=0; l<((p+i)->drssayisi); l++)
                    {
                        printf("%d.dersin adi:%s\n",l+1,((p+i)->drs+l)->dersadi);
                        printf("vize notu:%d\n",((p+i)->drs+l)->vizenot);
                        printf("final notu:%d\n",((p+i)->drs+l)->finalnot);
                    }
                    sayac=0;
                    printf("\n");
            }

            }
        }
    }
}


void durum_goster(ogrenci *p,int k)

{
    printf("\n--------durum_goster fonksiyonu:--------\n");
    int i,j;
    double x;
    for(i=0; i<k; i++)
    {
        printf("%d.ogrencinin bilgileri:\n",i+1);
        printf("\nad:%s\n",(p+i)->ad);
        printf("soyad:%s\n",(p+i)->soyad);
        printf("numara %d\n",(p+i)->numara);
        for(j=0; j<(p+i)->drssayisi; j++)
        {
            printf("%d.ders adi:%s \nvize notu:%d \nfinal notu:%d \n",j+1,((p+i)->drs+j)-> dersadi,((p+i)->drs+j)->vizenot,((p+i)->drs+j)->finalnot);
            x=(double)(((p+i)->drs+j)->vizenot)*0.4 +(((p+i)->drs+j)->finalnot)*0.6;
            if(x>=60)
            {
                printf("ogrenci %d. dersten basarili...\nortalamasi:%.2lf\n",j+1,x);
            }
            else
            {
                printf("ogrenci %d. dersten basarisiz...\nortalamasi:%.2lf\n",j+1,x);
            }

        }
        printf("\n");
    }
}

void listele(ogrenci *r,int s)
{
    printf("\n-----listele fonksiyonu------\n");
    int i,j;
    for(i=0; i<s; i++)
    {
        printf("%d. ogrencinin bilgileri:\n",i+1);
        printf("ad:%s\n",(r+i)->ad);
        printf("soyad:%s\n",(r+i)->soyad);
        printf("numara %d\n",(r+i)->numara);
        printf("ders sayisi%d\n",(r+i)->numara);
        for(j=0; j<(r+i)->drssayisi; j++)
        {
            printf("%d .ders adi:%s\n",j+1,((r+i)->drs+j)-> dersadi);
            printf("vize notu:%d\n",((r+i)->drs+j)-> vizenot);
            printf("final notu:%d\n",((r+i)->drs+j)-> finalnot);
        }
        printf("\n");
    }
}











