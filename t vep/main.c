#include <stdio.h>
#include <stdlib.h>

int main()
{ /*toplam sembolunu yildizlar
    int r,s,a;
   for(r=0;r<1;r++)
   {
       for(a=0;a<11;a++)
       {
           printf("*");
       }
       printf("\n");
   }
for(r=0;r<9;r++)
{
    for(s=-1;s<1*r;s++)
    {
        printf(" ");
    }
    for(a=0;a<1;a++)
    {
        printf("*");
    }
    printf("\n");
}
for(r=0;r<9;r++)
{
    for(s=0;s<9-1*r;s++)
    {
        printf(" ");
    }
    for(a=0;a<1;a++)
    {
        printf("*");
    }
    printf("\n");
}
for(r=10;r<11;r++)
{
    for(a=0;a<11;a++)
    {
        printf("*");
    }
    printf("\n");
}
*/
int i,j,rows;
printf("enter number of rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
    for(j=1;j<i;j++)
    {
        printf(" ");
    }
    for(j=1;j<=(rows*2-(2*i-1));j++)
    {
        if(i==1||j==1||j==(rows*2-(2*i-1)))
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
}
for(i=2;i<=rows;i++)
{
    for(j=i;j<rows;j++)
    {
        printf(" ");
    }
    for(j=1;j<=(2*i-1);j++)
    {
        if(i==rows||j==1||j==(2*i-1))
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
}



















    return 0;
}
