#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,kalan,i,j;
    int ctop=0,ttop=0;

    printf("bir sayi giriniz:");
    scanf("%d",&x);


   while (x>0)
{
    kalan=x%2;
    if(kalan==0)
 {
   for(i=0;i<i+1;i++)
     {
       ctop=ctop+i;
     }
 }

for(j=0;j<j+1;j++)
   {
     ttop=ttop+j;
   }
printf("bir sayi giriniz:");
  scanf("%d",&x);
}


     printf("%d",ctop);
printf("%d",ttop);




    return 0;
}
