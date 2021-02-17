#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define x 7
#define y 7
int main()
{
    //DILARA SEVIM POLAT   19010011064
    printf("\n-------------------Dilara 'nin 3 harfli metin bulmacasina hosgeldiniz---------------------\n\n");
    srand (time (NULL));
    int i,j,sayac1=0,sayac2=0,sayac3=0,sayac4=0;
    char  matrix[x][y],*ptr,a,b,c,devammi;
    ptr=matrix;

    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            *(ptr+i*y+j)='A'+rand()%26;
            printf("%c\t",  *(ptr+i*y+j));

        }
        printf("\n");

    }

    do
    {

        printf("\n\n");
        printf("*******************************\n");
        printf("yan yana 3 buyuk  harf giriniz:\n");
        printf("*******************************\n");
//GETCH KULLANDÝGÝM ICIN EKRANDA DÝREK GÝRDÝGÝM HARF GOZUKMEYECEK VE BUTUN HARFLERÝ GÝRDÝKTEN SONRA ENTER BASMAYA GEREK YOK
        a=getch();

        b=getch();

        c=getch();
        printf("--->  girdiginiz harfler = %c%c%c\n",a,b,c);
//SAGDAN SOLA BULUNAN KELİME İCİN
        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
            {
                if(*(ptr+i*y+j)==a  &&  *(ptr+i*y+j+1)==b && *(ptr+i*y+j+2)==c)
                {
                    sayac1++;
                    printf("--->   sagdan sola %d .satir da  (%d-%d) .sutunlarinda kelime bulundu \n",i,j,j+2);
                }
            }
        }


//SOLDAN SAGA BULUNAN KELİME ICIN
        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
            {
                if(*(ptr+i*y+j+2)==a  &&  *(ptr+i*y+j+1)==b  &&  *(ptr+i*y+j)==c)
                {
                    printf("--->   soldan saga %d .satir da  (%d-%d) .sutunlarinda Kelime bulundu \n",i,j+2,j);

                    sayac2++;

                }
            }
        }
//YUKARDAN ASAGİYA BULUNAN KELİME ICIN
        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
            {
                if(*(ptr+j*y+i)==a  &&  *(ptr+(j+1)*y +i)==b  &&  *(ptr+(j+2)*y +i)==c)
                {
                    printf("--->  yukardan asagiya (%d-%d ).satirlar da  %d.sutunda kelime bulundu \n",j,j+2,i);

                    sayac3++;

                }
            }
        }
//ASAGİDAN YUKARİYA BULUNAN KELİME ICIN
        for(i=x-1; i>=0; i--)
        {
            for(j=y-1; j>=0; j--)
            {
                if(*(ptr+(j)*y+i)==a  &&  *(ptr+(j-1)*y +i)==b  &&  *(ptr+(j-2)*y +i)==c)
                {
                    printf("--->  asagidan yukariya (%d-%d) .satirlarda da  %d.sutunda kelime bulundu \n",j,j-2,i);
                    sayac4++;
                }
            }
        }

        printf("- soldan saga bulunan kelime sayisi :%d\n",sayac1);
        printf("- sagdan sola bulunan kelime sayisi :%d\n",sayac2);
        printf("- yukardan asagiya bulunan kelime sayisi :%d\n",sayac3);
        printf("- asagidan yukariya bulunan kelime sayisi :%d\n\n",sayac4);

        sayac1=0;
        sayac2=0;
        sayac3=0;
        sayac4=0;
        printf("<..........metin bulmacasina devam etmek istiyorsaniz  'A'  veya  'a'  ya basiniz.........>\n");
        devammi=getch();
    }
    while(devammi=='A'  ||  devammi=='a');







    return 0;

}
