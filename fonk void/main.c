#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void mesaj()

{
    printf("hello world");
}
    void bosluk()
{
    printf("\n");
}

    void dongu()
{


for ( int i=0;i<5;i++)
{
    printf("%d",i);
}
}

void zar_at()
{ srand(time(NULL));
    int deger=1+ rand()%6;
    printf("%d",deger);
}
void kontrolet(int sayi)
{
    if(sayi%2==0)
        printf("sayi ciftir");
    else
        printf("sayi tektir");
}
void kareciz(int boy ,int en)
{
    for(int i=0;i<=boy;i++)
    {
        for(int j=0;j<=en;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{


mesaj();
bosluk();
dongu();
bosluk();
zar_at();
bosluk();
int m;
/*printf("bir sayi giriniz:");
scanf("%d",&m);
kontrolet(m);*/
int boy,en;
printf("boy giriniz:");
scanf("%d",&boy);
printf("en giriniz:");
scanf("%d",&en);
kareciz(boy,en);
    return 0;
}
