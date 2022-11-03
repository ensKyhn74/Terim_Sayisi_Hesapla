#include <stdio.h>
// klavyeden son terim,ilk terim ve artış miktarı girilir,terim sayısı hesaplanır
// 1,3,5,7,9,11,13,15  terim sayısı = (15-1)/2 + 1 = 8

int main() 

{

 int ilk_sayi;
 int son_sayi;
 
 int terim_sayisi;
 int artis_miktari;
 
 printf("son terimi girin: ");
 scanf("%d",&son_sayi);
  
 printf("ilk terimi girin: ");
 scanf("%d",&ilk_sayi);
 
 printf("artis miktarini girin: ");
 scanf("%d",&artis_miktari);

 terim_sayisi = (son_sayi - ilk_sayi) / artis_miktari + 1;
 
 printf("terim sayisi: %d",terim_sayisi);
  
 return 0;

}