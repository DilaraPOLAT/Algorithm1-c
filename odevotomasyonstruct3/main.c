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

void ogrenci_ara(char*,int);

int main()
{
    int i,j,x,a;
    char c[20],*cn;
    ogrenci *drs ;
    printf("kac ogrenci girilecek:");
    scanf("%d",&x);
    ogrenci *ptr=(ogrenci*)malloc(x*sizeof(ogrenci));
    for(i=0; i<x; i++)
    {
        printf("ogrenci ad:");
        scanf("%s",ptr->ad);
        cn=ptr->ad;
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
        cn++;

    }
    ptr--;
    drs--;
    cn--;

    ogrenci_ara(cn,x);

    return 0;
}

void ogrenci_ara( char*p,int k)
{
    int i,esitmi=1;

    char m[20];

    printf("ogrenci adi giriniz:");
    scanf("%s",&m);
    for(i=0;m[i]='/0';i++)
    {
    if(p[i]!=m[i])
    {
            printf("%c,%c\n",p[i],m[i]);
        esitmi=0;
        break;
}
    }
    printf("esitmi:%d",esitmi);
     if(esitmi==1&& p[i]=='/0')
    {
        printf("esitler");
    }
else
    {
        printf("esit degiller");
    }


}














