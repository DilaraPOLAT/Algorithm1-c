#include <stdio.h>
#include <stdlib.h>
typedef struct MalVarligi{
    char m_ad[50];
    int m_fiyat;
}Varlik;

typedef struct Calisanlar{
    int calisan_no;
    char calisan_ad[50];
    char calisan_soyad[50];
    int calisan_yas;
    int varlikAdet;
    Varlik *varlikPtr;
}Calisan;

typedef struct bolumler{
    int bolum_no;
    char bolum_ad[50];
    int calisansayisi;
    Calisan *calisan;
}bolum;

void BilgilerYazdir(bolum *b,int adet)
{
    int i,j,k;
    for(i=0;i<adet;i++)
    {
        printf("\n-------------------------------");
        printf("\n %d - %s \n",(b+i)->bolum_no,(b+i)->bolum_ad);
        printf("\n-------------------------------");

        for(j=0;j<(b+i)->calisansayisi;j++)
        {
            printf("%3d \t \n ",((b+i)->calisan+j)->calisan_no);
            printf("%25s \t \n",((b+i)->calisan+j)->calisan_ad);
            //printf("%s \n",((b+i)->calisan+j)->calisan_soyad);

            for(k=0;k<(((b+i)->calisan+j)->varlikAdet);k++)
            {
                printf("%25s \t \n",((((b+i)->calisan+j)->varlikPtr+k))->m_ad);
                printf("%3d \t \n",((((b+i)->calisan+j)->varlikPtr+k))->m_fiyat);
            }

        }
    }

}
int main()
{
    int i,adet,csayisi,j,varlik_adet,k;

    printf("Kac adet bolum:\n");
    scanf("%d",&adet);

    bolum *blm;
    blm=(bolum*)malloc(adet*sizeof(bolum));

    for(i=0;i<adet;i++)
    {
        printf("%d. bolumun numarasini giriniz:",i+1);
        scanf("%d",&(blm+i)->bolum_no);

        printf("%d. bolumun ismini giriniz:",i+1);
        scanf("%s",(blm+i)->bolum_ad);

        printf("%d. bolumun kac calisani var:",i+1);
        scanf("%d",&csayisi);

        (blm+i)->calisansayisi=csayisi;

        (blm+i)->calisan=(Calisan*)malloc(csayisi*sizeof(Calisan));

        for(j=0;j<csayisi;j++)
        {
            printf("%d. bolumun %d.calisanin numarasini giriniz:",i+1,j+1);
            scanf("%d",&((blm+i)->calisan+j)->calisan_no);

            printf("%d. bolumun %d.calisanin adini giriniz:",i+1,j+1);
            scanf("%s",((blm+i)->calisan+j)->calisan_ad);

           /* printf("%d. bolumun %d.calisanin soyadini giriniz:",i+1,j+1);
            scanf("%s",((blm+i)->calisan+j)->calisan_soyad);

            printf("%d. bolumun %d.calisanin yasini giriniz:",i+1,j+1);
            scanf("%d",&((blm+i)->calisan+j)->calisan_yas);*/

            printf("%d. bolumun %d.calisanin mal varligi sayisini giriniz:",i+1,j+1);
            scanf("%d",&varlik_adet);

            ((blm+i)->calisan+j)->varlikAdet=varlik_adet;
            ((blm+i)->calisan+j)->varlikPtr=(Varlik*)malloc(varlik_adet*sizeof(Varlik));

            for(k=0;k<varlik_adet;k++)
            {
                printf("%d. bolumun %d.calisanin %d.varliginin adini giriniz:",i+1,j+1,k+1);
                scanf("%s",(((blm+i)->calisan+j)->varlikPtr+k)->m_ad);

                printf("%d. bolumun %d.calisanin %d.varliginin fiyatini giriniz:",i+1,j+1,k+1);
                scanf("%d",&(((blm+i)->calisan+j)->varlikPtr+k)->m_fiyat);

            }

        }
    }
    BilgilerYazdir(blm,adet);
    return 0;
}
