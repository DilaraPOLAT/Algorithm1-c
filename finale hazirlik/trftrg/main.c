#include <stdio.h>
#include <stdlib.h>

typedef struct calisanlar{

int calisan_no;
char calisan_ad[50];
int calisan_yas;

}Calisanlar;

typedef struct bolumler{

 int bolum_no;
 char bolum_ad[50];
 int calisan_sayisi;
 Calisanlar *calisanlar;
}Bolumler;

int adet;
Bolumler *ekle()
{
    int i,j;
    printf("\nbolum sayisini giriniz:");
    scanf("%d",&adet);
    Bolumler *bolum=(Bolumler*)malloc(adet*sizeof(Bolumler));

    for(i=0;i<adet;i++)
    {
        printf("%d.bolumun numarasini giriniz:",i+1);
        scanf("%d",&(bolum+i)->bolum_no);

        printf("%d.bolumun adini giriniz:",i+1);
        scanf("%s",&(bolum+i)->bolum_ad);

        printf("%d.bolumun calisan sayisini giriniz:",i+1);
        scanf("%d",&(bolum+i)->calisan_sayisi);

        (bolum+i)->calisanlar=(Calisanlar*)malloc((bolum+i)->calisan_sayisi*sizeof(Calisanlar));

        for(j=0;j<(bolum+i)->calisan_sayisi;j++)
        {
            printf("%d.bolumun %d calisaninin numarasini giriniz:",i+1,j+1);
            scanf("%d",&((bolum+i)->calisanlar+j)->calisan_no);

            printf("%d.bolumun %d calisaninin adini giriniz:",i+1,j+1);
            scanf("%s",&((bolum+i)->calisanlar+j)->calisan_ad);

            printf("%d.bolumun %d calisaninin yasini giriniz:",i+1,j+1);
            scanf("%d",&((bolum+i)->calisanlar+j)->calisan_yas);

        }
    }
return bolum;

}
void Bilgileriyazdir(Bolumler *bolum)
{
    int i,j;
    for(i=0;i<adet;i++)
    {
        printf("-------------------------");
        printf("%d - %s\n",(bolum+i)->bolum_no,(bolum+i)->bolum_ad);
        for(j=0;j<(bolum+i)->calisan_sayisi;j++)
        {
            printf("\t%d",((bolum+i)->calisanlar+j)->calisan_no);
            printf("\t%s",((bolum+i)->calisanlar+j)->calisan_ad);
            printf("\t%d",((bolum+i)->calisanlar+j)->calisan_yas);
        }
    }
}

void ortalamabul(Bolumler *bolum)
{
 int i,j;
 double bolum_ort=0,genel_ort=0;
 for(i=0;i<adet;i++)
 {
    bolum_ort=0;
    printf("-------------------------");
    printf("%d - %s\n",(bolum+i)->bolum_no,(bolum+i)->bolum_ad);

    for(j=0;j<(bolum+i)->calisan_sayisi;j++)
    {
        bolum_ort+=((bolum+i)->calisanlar+j)->calisan_yas;

    }
    bolum_ort=(double)bolum_ort/(bolum+i)->calisan_sayisi;
    printf("yas ortalamasi:%.2f",bolum_ort);
    genel_ort+=bolum_ort;
 }
 genel_ort=genel_ort/adet;
 printf("\ntum bolumlerin yas ortalamasi%.2f",genel_ort);
}


int main()
{

Bolumler *bol;
bol=ekle();
system("cls");
Bilgileriyazdir(bol);

getch();
system("cls");

ortalamabul(bol);




    return 0;
}
