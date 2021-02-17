#include <stdio.h>
#include <stdlib.h>
struct telrehber
{
    char ad[20];
    char sehir[20];
    int tel;
}tel[3];

int main()
{
   int i;
   for(i=0;i<3;i++)
   {
       printf("%d.isim:",i);
       scanf("%s",&tel[i].ad);
       printf("%s in yasadigi sehir: ",tel[i].ad);
       scanf("%s",&tel[i].sehir);
       printf("s in telefon numarasi:",tel[i].ad);
       scanf("%d",&tel[i].tel);
   }
   for(i=0;i<3;i++)
   {
       printf("%s\t%s\t%d\n",tel[i].ad,tel[i].sehir,tel[i].tel);
   }

    return 0;
}
