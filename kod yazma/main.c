#include <stdio.h>
#include <stdlib.h>

int main()
{int matris1[]={1,2,3},matris2[]={454,5,6,7},i,j;
int a=sizeof(matris1)/sizeof(int),b=sizeof(matris2)/sizeof(int);
int matris3[a+b];
if(a<=b)
{

for(i=0;i<a;i++)
{
    matris3[i]=matris1[i];
}
for(i=0;i<b;i++)
{
    matris3[i+a]=matris2[i];
}
}
else
{

for(i=0;i<b;i++)
{
    matris3[i]=matris2[i];
}
for(i=0;i<a;i++)
{
    matris3[i+b]=matris1[i];
}
}
for(i=0;i<a+b;i++)
{
    printf("%d  ", matris3[i]);
}
    return 0;
}
