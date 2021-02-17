#include <stdio.h>
#include <stdlib.h>
int f(int *);
int g(int);
int main()
{

   /*int *p,sayi=5;
   p=&sayi;
   *p=8;
   printf("%p\n",p);
   printf("%d\n",*p);
   printf("%p\n",&sayi);
   printf("%p\n",&p);
   p++;
printf("%p\n",p);
   printf("%d\n",*p);
   printf("%p\n",&sayi);
   printf

   // 2....
   char kar='a';
   int tam=66;
   double ger =1.2;
   void *veri;

   veri=&kar;
   printf("char tipndeki kar in adresini tutar :%d\n",*(char*)veri);
   veri=&tam;
   printf("int tipindeki tam in adresini tutuyor :%d\n",*(int*)veri);
   veri=&ger;
   printf("double tipindeki  ger in adresini tutuyor :%d\n",*(double*)veri);


// 3....
// BÝLGÝSAYAR KAVRAMLARÝ
int a=10;
int *p;
p=&a;
printf("%d\n",*p);
*p=20;
printf("%d\n",a);
int *q=(int*)malloc(sizeof(int)*a);//POÝNTER AMA DÝZÝ GÝBÝ ERÝSÝLÝR MALLOC VOÝD TÝP OLMAYAN

q[3]=70;
printf("%d\n",q[3]);
f(&a);
printf("%d\n",a);
g(a);
printf("%d\n",a);



// 4....
int *a=(int*)malloc(sizeof(int)*5);
a[0]=2;
a[1]=5;
*(a+2)=8;
*(a+3)=10;
*(a+4)=40;
for(int i=0;i<5;i++)
{
    printf("%d ",a[i]);
}
*/
int t=40;
printf("%d\n",t++);
printf("%d\n",t);

int a=5,*pa;
pa=&a;
printf("%d\n",++*pa);
printf("%d\n",*pa);
printf("%d\n",++*pa);
printf("%d\n",*pa++);
printf("%d\n",*pa);
int dizi[5]={1,8,6,7,9};
int *p;
p=dizi;
printf("%d\n",*p);
printf("%d\n",p);
printf("%d\n",*++p);
printf("%d\n",*p++);
printf("%d\n",++*p);



































    return 0;
}/*
int g(int a)
{
    a=90;

}
int f(int *p)
{
    *p=80;

}
*/







