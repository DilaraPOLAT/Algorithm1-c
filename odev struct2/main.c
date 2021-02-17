#include <stdio.h>
#include <stdlib.h>
 typedef struct dersler
{
    char dersadi[50];
    int vizenot;
    int finalnot;
}ders;
typedef struct ogrenciler
{
    ders *drs;
    char ad[20];
    char soyad[20];
    int drssayisi;
    int numara;
}ogrenci;

int mystrcmp(ogrenci*,char*);
int main()
{
    int x,i,j,a;
    printf("kac ogrenci girilecek:");
    scanf("%d",&x);
    ogrenci*ptr=( ogrenci*)malloc(x*sizeof(ogrenci));

    for(i=0; i<x; i++)
    {
        printf("ad:");
        scanf("%s",(ptr+i)->ad);
        printf("soyad:");
        scanf("%s",(ptr+i)->soyad);
        printf("numara");
        scanf("%d",&(ptr+i)->numara);
        printf("ogrencinin ders sayisi:");
        scanf("%d",&a);
        (ptr+i)->drssayisi=a;
       (ptr+i)->drs=(ders*)malloc(a*sizeof( ders));

    for(j=0; j<a; j++)
    {
        printf("%d.ders adi:",j);
        scanf("%s",((ptr+i)->drs+j)-> dersadi);
        printf("%d.dersin  vize notu:",j);
        scanf("%d",&((ptr+i)->drs+j)->vizenot);
        printf("%d.dersin final notu:",j);
        scanf("%d",&((ptr+i)->drs+j)->finalnot);

    }

    }
    char m[20];
    printf("aranacak ogrencinin ismini giriniz:");
    scanf("%s",&m);
int kl =0;
kl = mystrcmp(ptr,&m);


    return 0;
}
int mystrcmp(ogrenci *p,char *m)
{
    int i;
    for(i=0;i<(p+1)->ad='/0';i++)
    {
        if((p+i)->ad=='/0'||*(m+i)=='/0')
        {
            return 1;
        }
        else
        {
            while((ptr+i)->ad!='/0'||*(m+i)!='/0')
            {
                if((ptr+i)==(m+i))
                {
                    return 1;
                }
            }
        }
    }
}











