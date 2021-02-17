#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand (time (NULL));
    int a;
    printf("boyut giriniz:");
    scanf("%d",&a);
    if(a%2==0)
    {
        a=a+1;
    }
    int dizi[a],*ptr,i;

    ptr=dizi;
    for(i=0; i<a; i++)
    {
        int sayi= 1+rand()%10;
        *(ptr+i)=sayi;

    }
    printf("\nrandumun atadigi sayilar\n");
    for(i=0; i<a; i++)
    {
        printf("%d  ",*(ptr+i));

    }
    int ortanca,gecb,toplam=0;
    for( int j=0; j<a; j++)
    {
        for(i=0; i<a; i++)
        {
            if(*(ptr+i)>=*(ptr+i+1))
            {
                gecb=*(ptr+i);
                *(ptr+i)=*(ptr+1+i);
                *(ptr+i+1)=gecb;

            }
        }
    }

    printf("  \n siraladiktan sonrasi   \n ");
    for(i=0; i<a; i++)
    {
        printf("%d  ",*(ptr+i));
    }
    for(i=0; i<a; i++)
    {
        toplam=*(ptr+i)+toplam;


        if(i==a/2)
        {
            ortanca=*(ptr+i);
            printf("  \nortanca :%d\n",ortanca);
        }
    }
    float  ort=(float)toplam/(float)a;
    printf("toplam :%d\n",toplam);

    printf("ortalama:%.2f",ort);

    return 0;
}
