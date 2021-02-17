#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 10
# define n 10
int main()
{



    srand (time (NULL));
    int i,j,sayac1=0,sayac2=0,sayac3=0,sayac4=0 ;
    char  dizi[m][n],*pdizi[m],a,b,k;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            dizi[i][j]='A'+rand()%26;

            printf("%c\t",dizi[i][j]);

        }
        printf("\n");
        pdizi[i]=dizi[i];
    }



    printf("\n\n");

    printf("art arda 3 sayi giriniz\n");
    scanf("%c%c%c",&a,&b,&k);


    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(*(pdizi[i]+j)==a  &&  *(pdizi[i]+j+1)==b && *(pdizi[i]+j+2)==k)
            {
                sayac1++;
            }

            if(*(pdizi[j]+i)==a && *(pdizi[j+1]+i)==b && *(pdizi[j+2]+i)==k)
            {
                sayac3++;
            }

        }
    }


    for(i=m-1; i>=0; i--)
    {
        for(j=n-1; j>=0; j--)
        {
            if(*(pdizi[i]+j)==a && *(pdizi[i]+j-1)==b && *(pdizi[i]+j-2)==k)
            {
                sayac2++;
            }
            if(*(pdizi[j]+i)==a && *(pdizi[j-1]+i)==b && *(pdizi[j-2]+i)==k)
            {
                sayac4++;
            }
        }
    }
    printf("soldan saga :%d\n",sayac1);
    printf("sagdan soldan :%d\n",sayac2);
    printf("yukardan asagiya :%d\n",sayac3);
    printf("asagidan yukariya :%d\n",sayac4);



















    return 0;
}
