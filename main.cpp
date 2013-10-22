tam-say----z-mleme
==================
#include<stdio.h>//Temel giriş çıkış fonksiyonlarının kullanılmasını sağlayan kütüphane
#include<stdlib.h>//System("pause") kodu için kullandım
int a, b, c, d, sayi;//işlemler için kullandığım değişken
int main()
{
printf("cozumlenecek sayi (maksimum 4 haneli) =");//yazdırmak için kullandığım  fonksiyon
scanf("%d", &sayi);
printf("\n");
a=sayi/1000;
b=(sayi-(a*1000))/100;
c=(sayi-(a*1000)-(b*100))/10;
d=sayi-(a*1000)-(b*100)-(c*10);
printf("\nverilen %d sayisinda:",sayi);
printf("\n%d tane binlik\n",a);
printf("\n%d tane yuzluk\n",b);
printf("\n%d tane onluk\n",c);
printf("\n%d tane birlik vardir",d);
system("pause");//programı durdurmak içn kullandım
return 0;
}
