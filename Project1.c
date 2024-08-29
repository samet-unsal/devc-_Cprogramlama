#include <stdio.h>
#include <stdlib.h>

/* Diziler ve Fonksiyonlar */

int DIZILER(int a[]);
float toplam(float b[]);

int main() 
{
	int dizi[]={1,3,5,7};
	DIZILER(dizi);//dizinin ismini yazsak yeter [] iþaretini kullanmamýza gerek yok.
	
	float sayilar[]={1.1,2.2,3.3,4.4};
	printf("Sayilarin toplami:%.2f",toplam(sayilar));
	return 0;
}

int DIZILER(int a[])//tüm diziyi gönderiyoruz.
{
	int i;
	for (i=0;i<4;i++)
	{
		printf("Dizinin %d.elemani:%d\n",i+1,a[i]);
	}
}

float toplam(float b[])
{
	float toplam=0;
	int i;
	for (i=0;i<4;i++)
	{
		toplam+=b[i];
	}
	return toplam;
}
