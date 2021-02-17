#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct telefon
{
    char marka[20];
    float ekran;
    char sistem[25];
    int fiyat;
};
int main()
{
    struct telefon tel1;
    struct telefon tel2={" asus",3.5,"android",700};
    tel1.ekran=4.3;
    strcpy(tel1.sistem,"ios");
    strcpy(tel1.marka,"iphone");
    tel1.fiyat=600;
    struct telefon *tel3;
    tel3=&tel1;
    tel3->ekran=9.9;
    strcpy(tel3->sistem,"yok");


    struct telefon*tel4;
  tel4=malloc(sizeof(struct telefon));
    tel4->ekran=9.9;
    tel4->fiyat=500;
    strcpy(tel4->sistem,"3310 sistem");
    strcpy(tel4->marka,"nokia");


    printf("*****\ntelefon1:\n----------\n");
    printf("isletim sistemi:%s\n",tel1.sistem);
    printf("markasi:%s\n",tel1.marka);
    printf("ekran :%.1f\n",tel1.ekran);
    printf("fiyati:%d\n",tel1.fiyat);
    printf("\n\n");
     printf("*****\ntelefon2:\n-----------\n");
    printf("isletim sistemi:%s\n",tel2.sistem);
    printf("markasi:%s\n",tel2.marka);
    printf("ekran :%.1f\n",tel2.ekran);
    printf("fiyati:%d\n",tel2.fiyat);
    printf("\n\n");
 printf("*****\ntelefon3:\n--------------\n");
    printf("isletim sistemi:%s\n",tel3->sistem);
    printf("markasi:%s\n",tel3->marka);
    printf("ekran :%.1f\n",tel3->ekran);
    printf("fiyati:%d\n",tel3->fiyat);
    printf("\n\n");
 printf("*****\ntelefon4:\n---------------\n");
    printf("isletim sistemi:%s\n",tel4->sistem);
    printf("markasi:%s\n",tel4->marka);
    printf("ekran :%.1f\n",tel4->ekran);
    printf("fiyati:%d\n",tel4->fiyat);

    return 0;
}
