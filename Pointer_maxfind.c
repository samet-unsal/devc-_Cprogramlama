#include <stdio.h>
#include <stdlib.h>

/* Bir diziyi maxfind isimli fonksiyona adres ile gönderip dizideki en büyük sayýyý ana fonksiyonda pointer olarak döndüren programý yazýn  */
int maxfind(int *a,int uzunluk);
int main()
{
	int sayilar[5]={3,4,42,100,1};
	int enfazla = maxfind(sayilar,5);
	printf("Sayilar dizisinin en buyuk elemani:%d\n",enfazla);
	
	return 0;
}

int maxfind(int *a,int uzunluk)
{
	int *pmax=&a[0];
	int i;
	for (i=0;i<uzunluk;i++)
	{
		if (a[i] > *pmax)
		{
			*pmax=a[i];
		}
	}
	return *pmax;
}

