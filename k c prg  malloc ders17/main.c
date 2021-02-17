#include <stdio.h>
#include <stdlib.h>
int *isimsiz(int boyut);
int main()
{


//ORNEK  1:
/*
    int boyut,i;
    printf("boyut giriniz:");
    scanf("%d",&boyut);
    int *ptr;
    ptr=(int *)malloc(boyut*sizeof(int));
    for(i=0;i<boyut;i++)
    {
        printf("%d .notu giriniz",i+1);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<boyut;i++)
    {
        printf("ptr[%d=]%d\n",i,ptr[i]);
    }
    */
    //ORNEK 2:
int boyut;
printf("dizi boyut giriniz:");
scanf("%d",&boyut);
    int *tut=isimsiz(boyut);
    int s;
    for(s=0;s<boyut;s++)
    {
        printf("tut[%d]=%d\n",s,tut[s]);
    }

    return 0;
}
int *isimsiz(int boyut)
{
    int *ptr;
    ptr=(int*)malloc(boyut*sizeof(int));
    int s;
    for(s=0;s<boyut;s++)
    {
        ptr[s]=s+1;
    }
    return ptr;
}



























