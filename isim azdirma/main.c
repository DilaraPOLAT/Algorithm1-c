#include <stdio.h>
#include <stdlib.h>

void sifir(int boyut)
{
    int i,j;

    for(i=0; i<=boyut; i++)
    {
        for(j=0; j<=boyut; j++)
        {
            if(i==0 || j==0 || i==boyut || j==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }

}

int main()
{
    int b;
    printf("Boyut giriniz: ");
    scanf("%d", &b);
    sifir(b);

return 0;
}
