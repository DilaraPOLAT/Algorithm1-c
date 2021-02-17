#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,i,b=0,c=0;
    char a[20],*p;
   printf("bir katar giriniz:");
   scanf("%s",&a);
   p=a;
   for(i=0;i<20;i++)
   {
    if(p[i]=='\0')
   {
     k=i;
     break;
   }
   }
 p=(int*)malloc(k*sizeof(int));
 for(i=0;i<k;i++)
 {
     if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='u'||*(p+i)=='ü'||*(p+i)=='o'||*(p+i)=='ö'||*(p+i)=='ý'||*(p+i)=='i')
     {
         b++;

     }
     else
     {
       c++;
     }
 }
 if((*(p+3))=='a')
 {
     printf("flrfrkfr");
 }
printf("unlu sayisi:%d,unsuz sayisi:%d",b,c);










    return 0;
}
