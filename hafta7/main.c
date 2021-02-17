#include <stdio.h>
#include <stdlib.h>

int main()
{
    int urun,maas ;
    printf("maas giriniz:");
    scanf("%d",&maas);
    printf("ürün miktarina giriniz");
    scanf("%d",&urun);
    if(urun>=1 || urun>=10)
    {
        maas =maas+(urun*5);
        printf("toplam maas:%d",maas);
    }
    else if(urun<=11 ||urun>=20)
    {
       maas =maas+(urun*10);
        printf("toplam maas:%d",maas);
    }
    else if(urun<=21 || urun>=30)
    {
         maas =maas+(urun*15);
        printf("toplam maas:%d",maas);
    }
    else
     printf("toplam maas:%d",maas);
    return 0;
}

