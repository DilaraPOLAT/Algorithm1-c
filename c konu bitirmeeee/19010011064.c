#include <stdio.h>
#include <stdlib.h>
/*DİLARA SEVİM POLAT   19010011064*/
void D_harfi(int boyut)
{
    for(int i=0; i<=boyut; i++)
    {
        for(int j=0; j<=boyut; j++)
        {
            if(i==0||i==boyut||j==0||j==boyut)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void A_harfi(int boyut)
{
    for(int i=0; i<=boyut; i++)
    {
        for( int j=0; j<=boyut; j++)
        {
            if(i==0 || i==boyut/2 ||j==0 || j==boyut)
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
void I_harfi(int boyut)
{


    for(int i=0; i<=boyut; i++)
    {
        if(i==0)
        {
            printf("*\n\n");

        }
        printf("*\n");
    }
}

void L_harfi(int boyut)
{


    for( int i=0; i<=1; i++)
    {
        for(int j=0; j<=boyut; j++)
        {
            if(i==0)
            {
                printf("*\n");
            }

            else
            {
                printf("*");
            }
        }
    }
}



void R_harfi(int boyut)
{


    for( int i=0; i<=boyut; i++)
    {
        for (int j=0; j<=boyut; j++)
        {
            if(i==0  ||j==0 || j==boyut &&i!=boyut/2 || i==boyut/2 && j!=boyut  )
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






void P_harfi(int boyut)
{
    for( int i=0; i<=boyut; i++)
    {
        for( int j=0; j<=boyut; j++)
        {
            if(i==0 || j==0 || i==boyut/2|| j==boyut &&i<=boyut/2  )
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
void O_harfi(int boyut)
{


    for( int i=0; i<=boyut; i++)
    {
        for(int j=0; j<=boyut; j++)
        {
            if(i==0 || i==boyut ||j==0 || j==boyut)
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



void T_harfi(int boyut)
{
    for( int i=0; i<=boyut; i++)
    {
        for(int j=0; j<=boyut; j++)
        {
            if(i==0 || i!=0 && j==boyut/2)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void bosluk()
{
    printf("\n\n\n");
}

int main()
{
    int boyut;
    printf("boyut giriniz:");
    scanf("%d",&boyut);
    D_harfi(boyut);
    bosluk();
    I_harfi(boyut);
    bosluk();
    L_harfi(boyut);
    bosluk();
    A_harfi(boyut);
    bosluk();
    R_harfi(boyut);
    bosluk();
    A_harfi(boyut);
    bosluk();
    bosluk();
    P_harfi(boyut);
    bosluk();
    O_harfi(boyut);
    bosluk();
    L_harfi(boyut);
    bosluk();
    A_harfi(boyut);
    bosluk();
    T_harfi(boyut);

    return 0;
}
