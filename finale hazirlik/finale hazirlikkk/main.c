#include <stdio.h>
#include <stdlib.h>
void f1(int);
void f2(int*);
void swap(int*,int*);
double* maxadr(double a[],int boyut)
{
    double ebd=a[0];
    double *eba=&a[0];
    int i;
    for(i=1;i<boyut;i++)
    {
        if(a[i]>ebd)
        {
            ebd=a[i];
            eba=&a[i];

        }

    }

return eba;
}
int main()
{// pointer adresleri ile ilgili ornek:
    /*
    int *pc,c;
    c=22;
    printf("c nin degeri:%d\n",c);
    printf("c nin adresi:%p\n",&c);
    pc=&c;
    printf("pc nin tutugu adresteki degeri:%d\n",*pc);
    printf("pc nin adresi:%p\n",&pc);
    printf("pc nin tutugu adres:%p\n",pc);
    c=11;
    printf("pc nin adresi:%p\n",&pc);
    printf("pc nin tutgu adresin degeri:%d\n",*pc);
    printf("pc nin tutugu adres:%p\n",pc);
    *pc=2;
    printf("c nin adresi:%p\n",&c);
    printf("c nin degeri:%d\n",c);

  // void pointer ile ilgili ornek :
  char kar='a';
  int    tam =66;
  double ger= 1.2;
  void *veri;
  veri=&kar;
  printf("veri char kar karakterini gosteriyor:%c\n",*(char*)veri);
  veri=&tam;
  printf("veri int tam gosteriyot:%d\n",*(int*)veri);
  veri=&ger;
  printf("veri double ger gosteriyor:%lf\n",*(double*)veri);

//GOSERÝCÝLER VE DÝZÝLER
int a[9]={1,5,7,6,9,3,2,8,6};
int *p,*q;
p=&a[0];
q=&a[8];
printf("a nin adresi:%p\n",&a);
printf("p pointerin gosterdigi adres:%p\n",p);
printf("q pointerin gosterdigi adres:%p\n",q);
printf("p nin gosterdigi adresteki degeri:%d\n",*p);
printf("q nun gosterdigi adresteki degeri:%d\n",*q);

//fonksiyon pointerleri
int x=10;
printf("x in degeri\n");
printf("fonksiyonlar cagirmadan once:%d\n",x);
f1(x);
printf("f1 fnksiyonu cagrildiktan sonra:%d\n",x);
f2(&x);
printf("f2 fonksiyonu cagrildiktan sonra:%d\n",x);

//fonk pointer ve swap islemi
int x=40,y=42;
printf("fonksiyon cagrilmadan once :x=%d,y=%d\n",x,y);
swap(&x,&y);
printf("fonksiyon cagrildiktan sonra :x=%d,y=%d\n",x,y);

// fonksiyon geri donus degri olan gostericiler
double x[6]={1.2,4.3,7.9,12.5,6.0,5.1};
double *p;
int k;
for(k=0;k<6;k++)
{
    printf("%d, %.2lf,%p\n",k,x[k],&x[k]);
}
    p=maxadr(x,6);
    printf("en buyuk deger:%.2lf\n",*p);
    printf("en buyuk adres:%p\n",p);
    printf("en buyuk konum:%d\n" , (int)(p-&x[0]));
printf("%p,%p",p-&x[0],&x[0]);
*/
// UYGULAMAAAAAA
int a=5,b=10;
int dizi[5]={1,8,12,3,9};
int matris[3][3]={{0,7,4},{6,2,11},{15,18,22}};
int *psayi,*qsayi,*tsayi,*pdizi,*pmat;
psayi=&a;
qsayi=&b;
//LEVEL 1:
printf("LEVEL 1/ SAYÝ\n");
printf("---------------------------------------------------------------\n");
printf("psayi deger: %d qsayi deger:%d \n",*psayi,*qsayi);
printf("psayi tuttugu adres:%d,qsayi tutugu adres :%d\n",psayi,qsayi);
printf("psayi deger%d,qsayi deger %d\n",++*psayi,++*qsayi);
printf("psayi deger%d,qsayi deger %d\n",*--psayi,*++qsayi);
printf("psayi deger%d,qsayi deger %d\n",*psayi++,*qsayi--);
printf("psayi deger%d,qsayi deger %d\n",*psayi,*qsayi);
printf("--------------------------------------------------------------\n");
//LEVEL 2:
pdizi=dizi;
printf("LEVEL 2 \ DÝZÝ\n");
printf("--------------------------------------------------------------\n");
printf("dizi tutugu adres :%d,pdizi tutugu adres:%d\n",dizi,pdizi);
printf("dizi tutugu adres :%p,pdizi tutugu adres:%p\n",dizi,pdizi);
printf("pdizi deger:  %d  dizi deger:   %d\n",*dizi,*pdizi);
printf("(dizi+1) tutugu adres :%d ,(pdizi+1) tutugu adres:%d\n",(dizi+1),(pdizi+1));
printf("(dizi+1) tutugu adres :%d ,pdizi+1 tutugu adres:%d\n",(dizi+1),++pdizi);
pdizi=dizi;
printf("(dizi+3)deger:%d,(pdizi+3) deger:%d \n ",*(dizi+3),*(pdizi+3));
pdizi=dizi;
printf("(*pdizi++) deger :%d\n",*(pdizi++));
pdizi=dizi;
printf("(*++pdizi) deger:%d\n",(*++pdizi));
pdizi=dizi;
printf("(++*pdizi) deger :%d\n",(++*pdizi));
printf("--------------------------------------------------------------\n");
//LEVEL 3:
pmat=matris;
printf("LEVEL 3 / MATRÝS/n");
printf("--------------------------------------------------------------\n");
printf("matris tutugu adres:%d,pmat tutugu adres:%d\n",matris,pmat);
printf("matris deger:%d,pmat deger:%d\n",*matris,*pmat);
printf("matris deger:%d,pmat deger:%d\n",**matris,*pmat);
printf("matris+1 tutugu adres:%d,pmat+1 tutugu adres:%d\n",matris+1,pmat+1);
printf("(matris+1) deger:%d,(pmat+1) deger:%d\n",*(matris+1),*(pmat+1));
printf("(matris+1) deger:%d,(pmat+1) deger:%d\n",**(matris+1),*(pmat+1));
printf("(matris+1)+1 tutugu adres:%d,(pmat+1)+1 tutugu adres:%d\n",(matris+1)+1,(pmat+1)+1);
printf("(matris+1)+2 deger:%d,(pmat+1)+2 deger:%d\n",*(*(matris+1)+2),*((pmat+1)+2));
printf("(matris+1)+1 tutugu adres:%d,(pmat+3)+1 tutugu adres:%d\n",(matris+1)+1,(pmat+3)+1);
printf("(matris+1)+1 deger:%d,(pmat+7) deger:%d\n",*((*matris+1)+1),*(pmat+7));
/*
//STRİNG
char *p;
char s[20]={"programla"};
p=s;
printf("p nin tutugu adres:%d snin tutugu adres :%d\n",p,s);
printf("%s %s\n",p+7,s+7);
printf("%c %c\n",p[4],s[4]);


//pointer ornek;
int *x,*y,a=15;
x=&a;
*x=42;
y=x;
*y=13;

printf("%d ,%d",*x,*y);

//malloc ornek;
long t=0;
char *p;
for(;;)
{
 p=malloc(1024);
if(p==NULL)
{break;


}
t+=1024;


}

printf("toplam alan :%ld",t);

//MALLOC CALLOC;
// 1;
int *p;
p=(int*)malloc(100*sizeof(int));
if(p==NULL)
{
    printf("yetersiz bellek");
    exit(1);
}
else
    printf("yeterli bellek");

free(p);
// 2;
int *p;
int k;
printf("boyut giriniz:");
scanf("%d",&k);
p=(int*)calloc(k,sizeof(int));
if(p==NULL)
{
    printf("yetersiz bellek");
    exit(1);
}
else
    printf("yeterli bellek");
    free(p);

//malloc calloc realloc;
//anlamadim birine sor
int *p,n,toplam=0,i;
printf("boyut giriniz:");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
if(p==NULL)
{
    printf("yetersiz alan:");
    exit(0);
}
for(i=0;i<n;i++)
{
    printf("sayi giriniz:");
    scanf("%d",p+i);
    toplam+= *(p+i);
}
printf("toplam:%d",toplam);
free(p);

//calloc
int *r,i,k,top=0;
printf("boyut giriniz:");
scanf("%d",&k);
r=(int*)calloc(k,sizeof(int));
if(r==NULL)
{
    printf("yetersiz bellek");
    exit(0);
}

for(i=0;i<k;i++)
{
    printf("sayi giriniz:");
    scanf("%d",r+i);
    top=top+*(r+i);
}
printf("toplam:%d",top);

//REALLOC
int ptr,n1,n2,i;
printf("boyut giriniz:");
scanf("%d",&n1);
ptr=(int*)malloc(n1*sizeof(int));
for(i=0;i<n1;i++)
{

  printf("%u\n",ptr+i);

}
printf("yeni boyut giriniz");
scanf("%d",&n2);
ptr=(int*)realloc(ptr,n2*sizeof(int));
for(i=0;i<n2;i++)
{
    printf("%u\n",ptr+i);
}
*/









    return 0;
}
void f1(int n)
{
    n=40;
    printf("f1 fonksiyonu icinde :%d\n",n);

}
void f2(int *n)
{
    *n=77;
    printf("f2 fonksiyonu icinde :%d\n",*n);

}
void swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
  printf("x=%d,y=%d\n",*x,*y);




}











