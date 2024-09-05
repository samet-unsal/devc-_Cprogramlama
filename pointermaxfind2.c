#include <stdio.h>
#include <stdlib.h>

/* Bir diziyi maxfind isimli fonksiyona adres ile g�nderip dizideki en b�y�k sayyyy ana fonksiyonda pointer olarak d�nd�ren program� yazyn  */
int maxfind(int *a,int uzunluk);
int main()
{
	int sayilar[5]={3,4,42,100,1};
	int *enfazla,i;
	enfazla = maxfind(sayilar,5);
	printf("Sayilar dizisinin en buyuk elemani:%d\n",*enfazla);
	printf("En buyuk eleman dizinin %d.elemanidir.",(enfazla-&sayilar[0]));//pointer adreslerini kullanarak dizinin ka��nc� eleman oldu�unu bulduk.
	// istedi�imiz eleman�n adresinden dizinin ilk eleman�n�n adresinden ��kararak ka��nc� eleman oldu�unu buluruz : p(eleman�m�z)-&a[0](herhangi bir dizinin ilk eleman�).
	//dizilerle �al���rken zaten ayn� t�r de�i�ken olur ama yine de ayn� t�r de�i�ken olmas�na dikkat etmemiz gerekir.
	
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
			pmax=&a[i];
		}
	}
	return pmax;
}

