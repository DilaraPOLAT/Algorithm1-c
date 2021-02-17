#include <stdio.h>
#include <stdlib.h>

int main()
{/*
    int  dizia[ ]={1,2,3,4,5},dizib[ ]={6,7,8,9,10,11,21};
   int a=sizeof(dizia)/sizeof(int);
   int b=sizeof(dizib)/sizeof(int);
   int dizic[a+b];
   int ai=0,i,bi=0,j;
   for(i=0;i<a+b;a++)
   {
       if(a<=ai)
       {
        dizic[i]=dizib[bi];
        bi++;
       }
       else if(b<=bi)
       {
           dizic[i]=dizia[ai];
           ai++;
       }
       else
       {
           if(dizia[a]<dizib[bi])
           {
               dizic[i]=dizia[ai];
               ai++;
           }
           else
           {
               dizic[i]=dizib[bi];
               bi++;
           }
       }
   }
   for(j=0;j<a+b;j++)
   {
    printf("%d",dizic[j]);
   }
   */

   int i,j,boyut;
   printf("boyut gir:");
   scanf("%d",&boyut);
   for(i=1;i<=boyut;i++)
   {
       for(j=boyut;j>=1;j--)
       {
         printf(" ");
       }
       boyut--;
     printf("*");
     printf("\n");
   }




















    return 0;
}


















