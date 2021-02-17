#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    do
    {
        printf("bir sayi giriniz:\n");
        scanf("%d",&sayi);
        printf("%d 2 kati %d:",sayi,sayi*2);
    }
    while(sayi>0);



    return 0;
}
