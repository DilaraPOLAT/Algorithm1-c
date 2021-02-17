#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{/*//DERS 22 STRLEN FONK:
    //ornek1:
  char ad[]="dilara";
  int uzunluk=strlen(ad);
  printf("%s ismi %d karakterlidir.\n",ad,uzunluk);
  printf("%d\n",strlen(ad));
  printf("%d\n",strlen("ali"));

  //ornek2:
  char isim[10];
  printf("bir karakteer giriniz:");
  scanf("%s",&isim);
  printf("girdiniz karakter %d karakterlidir.",strlen(isim));

  //ornek3:
  char sehir[10]="istanbul";
  int i;
  for(i=0;i<strlen(sehir);i++)
  {
      printf("%c\n",sehir[i]);
  }

  printf("\n tersi\n");
for(i=strlen(sehir)-1;i>=0;i--)
{
    printf("%c\n",sehir[i]);
}
//ornek4:
char k_adi[10];
printf("karakter adiniz:");
scanf("%s",&k_adi);
if(strlen(k_adi)<8)
{
    printf("kullanici adiniz en az 8 karakter olmalidir:");
}
else
{
    printf("kayit basarili %s",k_adi);
}

 //DERS 23 STRCPY FONK:
//ornek 1:
char isim[10]="melek",isim2[10];
printf("%s",strcpy(isim2,isim));

 //ornek2:
 char mesaj[10];
 printf("%s",strcpy(mesaj,"ali"));


 //ORNEK3:
 char isim[]="melek",isimkopya[10];
 for(int i=0;i<strlen(isim);i++)
 {
     printf("merhaba %s  ",strcpy(isimkopya,isim));
 }

//DERS 24 SRTCAT FONK:
//ORNEK 1:

char mesaj1[]="merhaba ",mesaj2[]="dunya";
strcat(mesaj1,mesaj2);
printf("%s",mesaj1);
// yada printf icindede strcat fonk yazarsak yine ayni sey mesaj1ve mesaj2 yeri degistirsek dunya merhaba olur....


char mesaj[]=" merhaba ",isim[10];
printf("isim :");
scanf("%s",&isim);
printf("%s",strcat(isim,mesaj));


//ORNEK 2:

char isim[10],isimkopya[10],mesaj[]=" selam ";
printf("isim :");
scanf("%s",&isim);
strcpy(isimkopya,isim);
int uzunluk=strlen(isim);
printf(" %s isminizin karakterr uzunlugu %d dir.",strcat(mesaj,isimkopya ),uzunluk);


// DERS 25 STRCMP FONK:
// ORNEK 1:
strcmp(string1,string2)==0; //HER ÝKÝ KARAKTER DÝZÝSÝDE ESÝTTÝR.
strcmp(string1,string2)<0; // S1,S2 DEN ONCE GLÝR ALFABETÝK OLARAK.
strcmp(string1,string2)>0; // S1,S2 DEN SONRA GEÝR ALFABETÝK OLARAK.

char baskent[]="ankara",cevap[10];
printf("turkiyenin baskenti neresidir:");
scanf("%s",&cevap);
if(strcmp(baskent,cevap)==0)
{
    printf("tebrikler %s cevabiniz dogru... ");
}
else
{
    printf("yanlis cevap girdiniz...");
}

ORNEK 2:

char kull_adi[]="root",sifre[]="toor",sfr[10],k_ad[10];// sifre[]="12345" olabilirdi char da
printf("kullanici adi giriniz:");
scanf("%s",&k_ad);
printf("sifre:");
scanf("%s",&sfr);
if(strcmp(kull_adi,k_ad)==0&&strcmp(sifre,sfr)==0)
{
    printf("merhaba %s giris basarili",k_ad);
}


else
{
    printf("kullanici adi ya da sifre yanlis");
}


ORNEK 3:


char isim[][20]={"ali","tugce","melek","volkan","ahmet","alp"},gecicibellek[20];
int i,j,k;
printf("\n oncesi----\n");
for(k=0;k<6;k++)
{
    printf("%s\n",isim[k]);
}
for(i=0;i<6;i++)
{
    for(j=0;j<5;j++)
    {
        if(strcmp(isim[j],isim[j+1])>0)
        {
            strcpy(gecicibellek,isim[j]);
            strcpy(isim[j],isim[j+1]);
            strcpy(isim[j+1],gecicibellek);
        }
    }
}

printf("\n sonrasi--------\n");
for(i=0;i<6;i++)
{
    printf("%s \n",isim[i]);
}
// DERS 26 strrev fonk
//ORNEK 1:
// windows.h kutuphanesi ekle main altina system("color 02"); rakamlar degisebilir....


char ad[10],ad2[10];

printf(" dongu yardimiyla tersten yazdirma-----\n");
printf("ad:");
scanf("%s",&ad);
int uzunluk=strlen(ad);

for( int i=uzunluk;i>=0;i--)
{
    printf(" %c ",ad[i]);
}
printf(" \nSTRREV yardimiyla tersten yazdirma-----\n");

printf("isim:");
scanf("%s",ad2);
printf("%s",strrev(ad2));

// DERS 27 STRLWR FONK BUTUN HARFLERİ KUCUK YAZAR
//ORNEK 1:

char karakter[20];
printf("karakter:"); scanf("%s",&karakter);
printf("kucuk harfli:%s",strlwr(karakter));

// DERS 28 SRTUPR FONK BUTUN HARFLERİ BUYUK YAZAR
// ORNEK 1:


char karakter[20];
printf("karakter:"); scanf("%s",&karakter);
printf("buyuk harfli:%s",strupr(karakter));

*/
















    return 0;
}
