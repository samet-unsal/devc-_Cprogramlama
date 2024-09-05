#include <stdio.h>
#include <stdlib.h>

/* Bir diziyi maxfind isimli fonksiyona adres ile gönderip dizideki en büyük sayyyy ana fonksiyonda pointer olarak döndüren programı yazyn  */
int maxfind(int *a,int uzunluk);
int main()
{
	int sayilar[5]={3,4,42,100,1};
	int *enfazla,i;
	enfazla = maxfind(sayilar,5);
	printf("Sayilar dizisinin en buyuk elemani:%d\n",*enfazla);
	printf("En buyuk eleman dizinin %d.elemanidir.",(enfazla-&sayilar[0]));//pointer adreslerini kullanarak dizinin kaçıncı eleman olduğunu bulduk.
	// istediğimiz elemanın adresinden dizinin ilk elemanının adresinden çıkararak kaçıncı eleman olduğunu buluruz : p(elemanımız)-&a[0](herhangi bir dizinin ilk elemanı).
	//dizilerle çalışırken zaten aynı tür değişken olur ama yine de aynı tür değişken olmasına dikkat etmemiz gerekir.
	
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

