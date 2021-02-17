#include <stdio.h>
#include <stdlib.h>

int Uzunluk(char A[])
{
    int boyut=0;
    while(A[boyut]!='\0')
    {
        boyut++;
    }
    return boyut;
}


int KelimeAra(char cumle[], char kelime[])
{
    int bulunanKelimeSayisi=0;
    int l1=Uzunluk(cumle);
    int l2=Uzunluk(kelime);
    int i,j,sayac;

    for(i=0; i<=(l1-l2); i++)
    {
        if(cumle[i]== kelime[0])
        {
            sayac=1;
            for(j=1; j<l2; j++)
            {
                if(cumle[i+j]==kelime[j])
                    sayac++;
                else
                    break;
            }
            if(sayac==l2)
                bulunanKelimeSayisi++;
        }

    }
    return bulunanKelimeSayisi;
}

int main()
{
    char cumle[100];
    char kelime[10];

    printf("Cumleyi girin:");
    gets(cumle);
    printf("Aranacak kelimeyi girin:");
    gets(kelime);

    int bulunanKsayisi=KelimeAra(cumle, kelime);

    printf("Bulunan kelime sayisi: %d\n", bulunanKsayisi);



    return 0;
}
