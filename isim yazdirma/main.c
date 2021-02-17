#include <stdio.h>
#include <math.h>
#define boyut 6


int main()
{
   int bosluk, i,j;
 printf("\n\n ---isim=---\n\n");
   printf("\t********\n");
   for (i=1;i<=boyut-2;i++)
   {
       for(j=0;j<=1;j++)
       {
           printf("\t*");
       }
       printf("\n");
   }
   printf("\t*********");
   printf("\n\n\n");
   printf("\t*\n\n");
   for(i=1;i<=boyut;i++)
   {
       printf("\t*\n");
   }
   printf("\n\n\n");
   for(i=1;i<=boyut;i++)
   {
       printf("\t*\n");
   }
printf("\t**********");
printf("\n\n\n");
printf("\t*********\n");
for(i=1;i<=boyut-3;i++)
{
    for(j=0;j<=1;j++)
    {
        printf("\t*");
    }
    printf("\n");
}
printf("\t*********\n");
for(i=1;i<=boyut-3;i++)
{
    for(j=0;j<=1;j++)
    {
        printf("\t*");
    }
    printf("\n");
}
printf("\n\n\n\t");
for(i=1;i<=boyut+3;i++)
{
    printf("*");
}
printf("\n");
for(i=1;i<=boyut-3;i++)
{
   for(j=0;j<=1;j++)
   {
       printf("\t*");
   }
   printf("\n");
}
printf("\t*********\n");

  for(i=1;i<=boyut-2;i++)
  {
      printf("\t*\n");
  }

    return 0;
}
