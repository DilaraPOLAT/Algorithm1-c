#include <stdio.h>
#include <stdlib.h>
struct telefon
{
    char marka[20];
    float ekran;
    int fiyat;
    char sistem[25];
};
struct satici
{
    struct telefon
};
voidtel_bas(struct telefon *);
int main()
{
    //dizi yardimiyla
/*struct telefon tel[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("\n telefon %d icin \n",i+1);
        printf("---------\n");
        printf("markasi:");
        scanf("%s",tel[i].marka);
        printf("ekran inc:");
        scanf("%f",&(tel[i].ekran));
        printf("isletim sistemi:");
        scanf("%s",tel[i].sistem);
        printf("fiyat:");
        scanf("%d",&(tel[i].fiyat));

    }

    for(i=0;i<3;i++)
    {
        printf("\ntelefon %d icin \n",i+1);
        printf("markasi:%s\n",tel[i].marka);
        printf("ekran inc:%f\n",tel[i].ekran);
        printf("isletim sistemi:%s\n",tel[i].sistem);
        printf("fiyat:%d\n",tel[i].fiyat);
    }

// pointer mantigiyla
struct telefon tel[2];
struct telefon *tel_ptr;
tel_ptr=tel;
    int i;
    for(i=0;i<2;i++)
    {
        printf("\n telefon %d icin \n",i+1);
        printf("---------\n");
        printf("markasi:");
        scanf("%s",tel_ptr->marka);
        printf("ekran inc:");
        scanf("%f",&(tel_ptr->ekran));
        printf("isletim sistemi:");
        scanf("%s",tel_ptr->sistem);
        printf("fiyat:");
        scanf("%d",&(tel_ptr->fiyat));
        tel_ptr++;
    }

    tel_ptr=&tel[1];

    for(i=0;i<2;i++)
    {

        printf("\ntelefon %d icin \n",2-i);
        printf("-----------\n");
        printf("markasi:%s\n",tel_ptr->marka);
        printf("ekran inc:%.1f\n",tel_ptr->ekran);
        printf("isletim sistemi:%s\n",tel_ptr->sistem);
        printf("fiyat:%d\n",tel_ptr->fiyat);
        tel_ptr--;
    }

free(tel_ptr);


//ders20
struct telefon tel[2];
struct telefon *tel_ptr=malloc(sizeof(struct telefon)*3);

    int i;
    for(i=0;i<3;i++)
    {
        printf("\n telefon %d icin \n",i+1);
        printf("---------\n");
        printf("markasi:");
        scanf("%s",tel_ptr->marka);
        printf("ekran inc:");
        scanf("%f",&(tel_ptr->ekran));
        printf("isletim sistemi:");
        scanf("%s",tel_ptr->sistem);
        printf("fiyat:");
        scanf("%d",&(tel_ptr->fiyat));
        tel_ptr++;
    }

    tel_ptr--;

    for(i=0;i<3;i++)
    {

        printf("\ntelefon %d icin \n",3-i);
        printf("-----------\n");
        printf("markasi:%s\n",tel_ptr->marka);
        printf("ekran inc:%.1f\n",tel_ptr->ekran);
        printf("isletim sistemi:%s\n",tel_ptr->sistem);
        printf("fiyat:%d\n",tel_ptr->fiyat);
        tel_ptr--;
    }
    tel_ptr++;

free(tel_ptr);

//ders21
struct telefon a,b={"samsung",4.5,900,"s65jkdf"};
a=b;
printf("markasi:%s\n",a.marka);
printf("ekran:%.1f\n",a.ekran);
printf("isletim sistemi:%s\n",a.sistem);
printf("fiyat:%d\n",a.fiyat);


//ornek 2 fonksiyon kullanarak


struct telefon *tel_ptr=malloc(sizeof(struct telefon)*3);
tel_bas(&tel_ptr[0]);
int i;
 for(i=0;i<3;i++)
    {
        printf("\n telefon %d icin \n",i+1);
        printf("---------\n");
        printf("markasi:");
        scanf("%s",tel_ptr->marka);
        printf("ekran inc:");
        scanf("%f",&(tel_ptr->ekran));
        printf("isletim sistemi:");
        scanf("%s",tel_ptr->sistem);
        printf("fiyat:");
        scanf("%d",&(tel_ptr->fiyat));
        tel_ptr++;
    }
    tel_ptr--;
    for(i=0;i<3;i++)
    {
        printf("\n telefon %d\n",3-i);
        tel_bas(tel_ptr);
        tel_ptr--;
    }
    tel_ptr++;
*/
//ornek 3 icicestruct







    return 0;
}
void tel_bas(struct telefon*p)
{

  printf("markasi:%s\n",p->marka);
printf("ekran:%.1f\n",p->ekran);
printf("isletim sistemi:%s\n",p->sistem);
printf("fiyat:%d\n",p->fiyat);

}
