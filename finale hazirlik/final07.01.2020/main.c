#include <stdio.h>
#include <stdlib.h>

int main()
{/*
    //uygulamalar gostericiler hafta 10  -1
    int *ptr,p=10;
    ptr=&p;
    printf("p nin adresi:%d\n",&p);
    printf("ptr nin tutugu adres:%d\n",ptr);
    printf("ptr nin tutugu  adresteki deger:%d\n",*ptr);
     printf("ptr nin adresi:%p\n",ptr);
    printf("p nin degeri:%d\n",p);

    //2
    int a=10,b=20,toplam;
    int *ptr,*qtr;

ptr=&a;
qtr=&b;
toplam=*ptr + *qtr;
printf("toplam:%d",toplam);

   //3
int a=4,b=8;
int *ptr,temp;
ptr=&a;
temp=b;
b=a;
*ptr=temp;
printf("a=%d,b=%d",a,b);

 //hafta11 gostericiler ve diziler uygulama -1
 int a,i,toplam=0;
printf("boyut giriniz:");
scanf("%d",&a);
int dizi[a],*pdizi;
for(i=0;i<a;i++)
{
    printf("bir sayi giriniz:");
    scanf("%d",&dizi[i]);
}

pdizi=dizi;

for(i=0;i<a;i++)
{
    toplam+=*(pdizi+i);
}
float ort=(float)toplam/a;

printf("pointer ile ortalama:%.2f",ort);

 //2
 int matris[3][2]={{4,5},{8,4},{4.0}};
 int *mat;
 mat=matris;
 printf(" 3. elemana ulasacam:%d\n",*(mat+2));
 printf("yada :%d\n",**(matris+1));
 printf("4.:%d, pointer :%d",*(*(matris+1)+1),*(mat+3));

 //
 char *sehir="osmaniye";
 int i;
 while(*sehir!=NULL)
 {
     printf("%c-%p\n",*(sehir),sehir);
     sehir++;
 }

 //hgý

 char *ptr[]={{"dilara"},{"tugba"},{"helena"},{"helena"}};
int i,k=0;
for(i=0;ptr[i]!='\0';i++)
{

}

printf("%d",i);
*/
typedef struct fatura_bilgileri
{
    int fatura_borcu;
    int alt_aboneno;
}fatura;
typedef struct musteri_bilgileri
{
    char ad[20];
    char soyad[20];
    char ilce[20];
    fatura *f;
}musteri;

































    return 0;
}
