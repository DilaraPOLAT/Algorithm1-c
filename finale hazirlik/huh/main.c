#include <stdio.h>
#include <stdlib.h>

typedef struct fatura_bilgileri
{
    char fatura_tipi[20];
    int fatura_borcu;
    int alt_aboneno;
}fatura;
typedef struct musteri_bilgileri
{
    char ad[20];
    char soyad[20];
    char ilce[20];
    int aboneno;
    int fatura_say;
    fatura *f;
}musteri;
int a;
musteri *ekle()
{
 int i,j,b;
    printf("musteri sayisi:");
    scanf("%d",&a);
    musteri *ptr=(musteri*)malloc(a*sizeof(musteri));
    for(i=0;i<a;i++)
    {
        printf("musteri adi:");
        scanf("%s",(ptr+i)->ad);
        printf("musteri soyadi:");
        scanf("%s",(ptr+i)->soyad);
         printf("musteri abone no:");
        scanf("%d",&(ptr+i)->aboneno);
        printf("ilce:");
        scanf("%s",(ptr+i)->ilce);
        printf("fatura sayisi:");
        scanf("%d",&(ptr+i)->fatura_say);
        b=(ptr+i)->fatura_say;
        (ptr+i)->f=(fatura*)malloc(b*sizeof(fatura));
        for(j=0;j<b;j++)
        {
            printf("fatura tipi:");
            scanf("%s",((ptr+i)->f+j)->fatura_tipi);
            printf("borcu:");
            scanf("%d",&((ptr+i)->f+j)->fatura_borcu );
            printf("alt abone no:");
           scanf("%d",&((ptr+i)->f+j)->alt_aboneno);

        }

    }
    return ptr;
}
 void borc_hesapla(musteri *k)
 {
     int toplam=0,i,j;
          for(i=0;i<a;i++)
    {
       printf("----------\n%s adli kisinin borcu:",(k+i)->ad);
        for(j=0;j<(k+i)->fatura_say;j++)
        {

           toplam+= ((k+i)->f+j)->fatura_borcu ;

        }
        printf("\n%d",toplam);
        printf("\n");
        toplam=0;

    }

 }
void bilgi_goster(musteri *p)
{
    int k,i,j;
    printf("aranacak abone no giriniz:");
    scanf("%d",&k);
    for(i=0;i<a;i++)
    {
        for(j=0;j<(p+i)->fatura_say;j++)
        {
           if(k==(p+i)->aboneno)
    {
        printf("bulundu..\n\n");
        printf("adi:%s\n",(p+i)->ad);
        printf("soyadi:%s\n",(p+i)->soyad);
        printf("aboneno:%d\n",(p+i)->aboneno);
        printf("ilce:%s\n",(p+i)->ilce);
        printf("%d.fatura sayisi:%d\n",j,(p+i)->fatura_say);
        printf("fatura tipi :%s\n",((p+i)->f+j)->fatura_tipi);
        printf("fatura borcu:%d\n",((p+i)->f+j)->fatura_borcu);
        printf("fatura alt abone no:%d\n",((p+i)->f+j)->alt_aboneno);
    }
        }
    }

}
int main()
{
    musteri *p;
    p=ekle();
    borc_hesapla(p);
    bilgi_goster(p);

    return 0;

}
