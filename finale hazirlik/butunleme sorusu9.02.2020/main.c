#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *cumle;
   //alinacak cumle icine rastgele bir boyut belirlenir
   cumle=(char*)malloc(100*sizeof(char));
   printf("bir cumle giriniz:");
   gets(cumle);
   int kelime_syc=0,syc=0,enk=0,indis=0,i;
   //en kucuk kelime boyutu degeri ilk basta kelime uzunlugu kadar olsun
   for(i=0;*(cumle+i)!='\0';i++)
   {
       enk++;
   }
   for(i=0;*(cumle+i)!='\0';i++)
   {
       if(*(cumle+i)==' ')
       {
           if(enk>syc)
           {
               enk=syc;
               indis=i-enk;
           }
           syc=0;
           kelime_syc++;
       }
       else
       {
           syc++;
       }

   }
   printf("\nkelime sayisi:%d",kelime_syc+1);
   printf("\nen kisa kelime uzunlugu:%d\n",enk);
   printf("en kisa kelime:");
   for(i=indis;i<indis+enk;i++)
   {
       printf("%c",*(cumle+i));
   }
   printf("\n");
    return 0;
}
