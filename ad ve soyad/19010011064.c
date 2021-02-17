#include <stdio.h>
#include <stdlib.h>
/*DÝLARA SEVÝM POLAT   19010011064 */
void D_harfi(int boyut)
{
    for(int i=1; i<=boyut; i++)
    {
        for(int j=1; j<=boyut; j++)
        {
            if(j==1 || j==boyut || i==1 || i==boyut)
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
    for(int i=1; i<boyut; i++)
    {
        for( int j=1; j<=boyut; j++)
        {
            if(i==1 || i==boyut/2 || j==1 || j==boyut)
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
void i_harfi(int boyut)
{


    for(int i=1; i<=boyut-1; i++)
    {
        if(i==1)
        {
            printf("*\n\n");

        }
        printf("*\n");
    }
}

void L_harfi(int boyut)
{


    for( int i=1; i<=boyut; i++)
    {
        for(int j=1; j<=boyut; j++)
        {
            if(j==1 || i==boyut )
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



void R_harfi(int boyut)
{


    for( int i=1; i<=boyut; i++)
    {
        for (int j=1; j<=boyut; j++)
        {
            if(i==1 || j==1 || j==boyut && i!=boyut/2 || i==boyut/2 && j!=boyut  )
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
    for( int i=1; i<=boyut; i++)
    {
        for( int j=1; j<=boyut; j++)
        {
            if(i==1 || j==1 || i==boyut/2 || j==boyut && i<=boyut/2  )
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


    for( int i=1; i<=boyut; i++)
    {
        for(int j=1; j<=boyut; j++)
        {
            if(i==1 || i==boyut || j==1 || j==boyut)
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
    for( int i=1; i<=boyut; i++)
    {
        for(int j=1; j<=boyut; j++)
        {
            if(i==1 || i!=1 && j==boyut/2)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void altsatiragec()
{
    printf("\n\n\n");
}

int main()
{
    int boyut;
    printf("boyut giriniz:");
    scanf("%d",&boyut);
    D_harfi(boyut);
    altsatiragec();
    i_harfi(boyut);
    altsatiragec();
    L_harfi(boyut);
    altsatiragec();
    A_harfi(boyut);
    altsatiragec();
    R_harfi(boyut);
    altsatiragec();
    A_harfi(boyut);
    altsatiragec();
    altsatiragec();
    P_harfi(boyut);
    altsatiragec();
    O_harfi(boyut);
    altsatiragec();
    L_harfi(boyut);
    altsatiragec();
    A_harfi(boyut);
    altsatiragec();
    T_harfi(boyut);

    return 0;
}
