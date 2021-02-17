#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j;
    printf("bir karenin kenar uzunlugu:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
{

      for(j=1;j<=x;j++)
   {
            printf("*");
   }
 printf("\n");

}


    return 0;
}
