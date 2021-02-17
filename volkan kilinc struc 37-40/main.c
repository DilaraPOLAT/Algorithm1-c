#include <stdio.h>
#include <stdlib.h>
/*
ornek1:struct ogrenci
{
    char ad[20];
    char soyad[20];
    char bolum[50];
    int sinif;
    int numara;
    float ortalama;
}ogr;
//ornek 2:
struct kitaplar
{
    char ad[20];
    char yazar[50];
    float fiyat;
}ktp1={"kayip sicil","soner yalcin",17.99},ktp2={"ilk ask","jhon green",21.00};*/
int main()
{//ornek1:
    strcpy(ogr.ad,"dilara sevim");
    strcpy(ogr.soyad,"polat");
    strcpy(ogr.bolum,"bilgisayar muhendisligi");
    ogr.numara=19010011064;
    ogr.sinif=1;
    ogr.ortalama=99.9;
    printf("ad:%s\n",ogr.ad);
    printf("soyad:%s\n",ogr.soyad);
    printf("bolum:%s\n",ogr.bolum);
    printf("no:%d\n",ogr.numara);
    printf("sinif:%d\n",ogr.sinif);
    printf("ortalama:%.2f\n",ogr. ortalama);

    //ornek 2:
    printf("ad:%s\n",ktp1.ad);
    printf("yazar:%s\n",ktp1.yazar);
    printf("fiyat:%.2f\n\n\n",ktp1.fiyat);
    printf("ad:%s\n",ktp2.ad);
    printf("yazar:%s\n",ktp2.yazar);
    printf("fiyat:%.2f\n",ktp2.fiyat);
*/
    return 0;
}
