#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cift_sayac=0,tek_sayac=0;
    int max_cift_sayi_tekrar=0,max_tek_sayi_tekrar=0;
    int girilen_sayi=0;

    do
    {
        printf("lutfen sayi girin:");
        scanf("%d",&girilen_sayi);
        printf("\n");

        if(girilen_sayi>=0)
        {
            if(girilen_sayi%2==0)
            {
                cift_sayac++;
                if(max_cift_sayi_tekrar<cift_sayac)
                {
                    max_cift_sayi_tekrar=cift_sayac;
                }
                tek_sayac=0;
            }
            else
            {
                tek_sayac++;
                if(max_tek_sayi_tekrar<tek_sayac)
                {
                    max_tek_sayi_tekrar=tek_sayac;
                }
                cift_sayac=0;
            }
        }
    }
    while(girilen_sayi>=0);
    printf("------------------\nnegatif sayi girdiniz...program sonlandiriliyor");
    printf("ardisik girilen cift sayi tekrari=%d\n",max_cift_sayi_tekrar);
    printf("ardiþik girilen tek sayi tekrar=%d",max_tek_sayi_tekrar);

    return 0;
}
