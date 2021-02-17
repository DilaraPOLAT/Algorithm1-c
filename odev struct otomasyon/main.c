#include <stdio.h>
#include <stdlib.h>
typedef struct ders
{
    char dersadi[20];
    int vizenot;
    int finalnot;

} dersler;

typedef struct ogrenciler
{
    char ad[20];
    char soyad[20];
    int numara;
    int ders_sayisi;
    dersler *drs;

} ogrenci;

int mstrcmp ( char*,ogrenci*);

int main()
{
    int i,j,x,a;
    ogrenci *drs ;
    printf("kac ogrenci girilecek:");
    scanf("%d",&x);
    ogrenci *ptr=(ogrenci*)malloc(x*sizeof(ogrenci));
    for(i=0; i<x; i++)
    {
        printf("ogrenci ad:");
        scanf("%s",ptr->ad);

        printf("ogrenci soyad:");
        scanf("%s",ptr->soyad);
        printf("ogrenci numara:");
        scanf("%d",&ptr->numara);
        printf("ogrencinin ders sayisi:");
        scanf("%d",&ptr->ders_sayisi);
        a=ptr->ders_sayisi;
        ptr->drs=(dersler*)malloc(a*sizeof(dersler));
        for(j=0; j<a; j++)
        {
            printf("ders adi:");
            scanf("%s",ptr->drs->dersadi);
            printf("vize notu:");
            scanf("%d",&ptr->drs->vizenot);
            printf("final notu:");
            scanf("%d",&ptr->drs->finalnot);
            drs++;
        }
        ptr++;


    }
    ptr--;
    drs--;

 char m[20],*pm;
     printf(" aranacak ogrencinin adini giriniz:");
    scanf("%s",&m);
    pm=m;
    mstrcmp(pm,ptr);
    printf("%d",mstrcmp(pm,ptr));


    return 0;
}

int mstrcmp ( char *t, ogrenci*p)
{printf("fjjer");

if(mstrcmp(p->ad,*t))
{
    printf("fjjer");

}




return 5;
}



