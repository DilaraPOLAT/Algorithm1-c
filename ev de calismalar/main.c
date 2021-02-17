#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i=0,j,kalan;
    int ctop=0,ttop=0;
    printf("bir sayi giriniz:");
    scanf("%d",&x);
   while (x>0)
    {
        kalan=x%2;
        if (kalan==0)

        {
            i++;
            ctop=i+ctop;

         break;

        }


        if (kalan!=0)
        {
            for (j=1;j<j+1;j++)
          {
              ttop=j+ttop;
              break;

          }

        }
        printf("bir sayi daha giriniz:");
        scanf("%d",&x);
       }

    printf("ctop:%d\nttop:%d",ctop,ttop);
    return 0;
}
