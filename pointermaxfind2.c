#include <stdio.h>
#include <stdlib.h>

/* Bir diziyi maxfind isimli fonksiyona adres ile gönderip dizideki en büyük sayyyy ana fonksiyonda pointer olarak döndüren programý yazyn  */
int maxfind(int *a,int uzunluk);
int main()
{
	int sayilar[5]={3,4,42,100,1};
	int *enfazla,i;
	enfazla = maxfind(sayilar,5);
	printf("Sayilar dizisinin en buyuk elemani:%d\n",*enfazla);
	printf("En buyuk eleman dizinin %d.elemanidir.",(enfazla-&sayilar[0]));//pointer adreslerini kullanarak dizinin kaçýncý eleman olduðunu bulduk.
	// istediðimiz elemanýn adresinden dizinin ilk elemanýnýn adresinden çýkararak kaçýncý eleman olduðunu buluruz : p(elemanýmýz)-&a[0](herhangi bir dizinin ilk elemaný).
	//dizilerle çalýþýrken zaten ayný tür deðiþken olur ama yine de ayný tür deðiþken olmasýna dikkat etmemiz gerekir.
	
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

