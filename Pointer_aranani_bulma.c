#include <stdio.h>
#include <stdlib.h>

/* Arananı bulma */

int aranansayi(char *dizi,char karakter);
int main()
{
	char isim[]="Enes";
	char aranan ='e';
	int say = aranansayi(isim,aranan);
	printf("%s icinde %c karakteri %d adet bulunmaktadir.",isim,aranan,say);
	return 0;
}

int aranansayi(char *dizi, char karakter)
{
	int sayac=0;
	while (*dizi != '\0')
	{
		if (*dizi == karakter)
		{
			sayac++;
		}
		dizi++;
	}
	return sayac;
}
