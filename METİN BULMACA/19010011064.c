#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 10
#define n 10

 //DILARA SEVIM POLAT 19010011064
int main()
{
    printf("\n---------Dilara'nin 3 harfli metin bulmacasina hosgeldiniz------------\n\n");
    srand (time(NULL));
    int i,j,a,b,c,sayac1=0,sayac2=0,sayac3=0,sayac4=0;
    char matris[m][n],*ptr[m],*ktr[m],devammi;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            matris[i][j]= 'A'+ rand()%26;
            printf("%c\t",matris[i][j]);
            ptr[i]=matris[i];
            ktr[i]=matris[i];
        }
        printf("\n");
    }
    do
    {
        printf("yan yana 3 harf giriniz:\n");
        //GETCH KULLANDİGİM ICIN EKRANDA DİREK GİRDİGİM HARF GOZUKMEYECEK VE BUTUN HARFLERİ GİRDİKTEN SONRA ENTER BASMAYA GEREK YOK
        a=getch();

        b=getch();

        c=getch();
        printf("\n---------------%c%c%c  girdiniz----------------\n\n",a,b,c);
// SOLDAN SAGA
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(*(*(ptr+i)+j)==a && *(*(ptr+i)+j+1)==b && *(*(ptr+i)+j+2)==c )
                {
                    sayac1++;
                }
            }
        }

//SAGDAN SOLA
        for(i=m-1; i>=0; i--)
        {
            for(j=n-1; j>=0; j--)
            {
                if(*(*(ptr+i)+j)==a && *(*(ptr+i)+j-1)==b && *(*(ptr+i)+j-2)==c)
                {
                    sayac2++;
                }
            }
        }
//YUKARDAN ASAGIYA
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(*(*(ktr+j)+i)==a && *(*(ktr+j+1)+i)==b && *(*(ktr+j+2)+i)==c)
                {
                    sayac3++;
                }
            }
        }
//ASAGIDAN YUKARIYA
        for(i=m-1; i>=0; i--)
        {
            for(j=n-1; j>=0; j--)
            {
                if(*(*(ktr+j)+i)==a && *(*(ktr+j-1)+i)==b && *(*(ktr+j-2)+i)==c)
                {
                    sayac4++;
                }
            }
        }

        printf("soldan saga bulunan kelime sayisi: %d\n",sayac1);
        printf("sagdan sola bulunan kelime sayisi: %d\n",sayac2);
        printf("yukardan asgiya bulunan kelime sayisi: %d\n",sayac3);
        printf("asagidan yukariya bulunan kelime sayisi: %d\n",sayac4);
        printf("\nisleme devam etmek istiyorsaniz  'A'  ya basiniz yada 'a' basiniz: \n");
        devammi=getch();
        sayac1=0;
        sayac2=0;
        sayac3=0;
        sayac4=0;
    }
    while(devammi=='A' || devammi=='a');





    return 0;
}
