#include <stdio.h>
#include <stdlib.h>

/* Girilen say�ya kadar olan pozitif �ift say�lar�n toplam�n�n ekrana yazd�r�lmas� */

int main() 
{
	int deger[5],i,carpim=1;
	for (i=0;i<5;i++)
	{
		printf("Lutfen %d. sayiyi girin:",i+1);
		scanf("%d",&deger[i]);
		carpim*=deger[i];
	}
	
	printf("Girdiginiz sayilarin carpim sonucu:%d\n",carpim);
	
	for (i=0;i<5;i++)
	{
		printf("Girdiginiz %d.sayi:%d\n",i+1,deger[i]);
	}

	return 0;
}
