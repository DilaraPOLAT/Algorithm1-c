#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ORNEK 1:
    /*
    int *a=malloc(20*sizeof(int));
    int *b=calloc(20,sizeof(int));
    int i;
    for(i=0;i<20;i++)
    {
        printf("b[%d]=%d \t a[%d]=%d\n",i,b[i],i,a[i]);
    }
    free(a);
    free(b);
    */
    // ORNEK 2:
    int *a=malloc(10*sizeof(int));
    int *b=calloc(10,sizeof(int));
    int i;
    for(i=0;i<10;i++)
    {
        printf("a[%d]=%d\tb[%d]=%d\n",i,a[i],i,b[i]);
    }

    a=realloc(a,5*sizeof(int));
    for(i=0;i<5;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    free(a);
    free(b);







    return 0;
}











