#include <stdio.h>
#include <stdlib.h>

/* Pointer Dizi Adres*/
int dizielemanibulma(int *a,int n,int aranan);
int main()
{
	int sayilar[]={25,95,250,985,632,742,824,50,80,573};
	int *indis;
	int bul=95;
	indis = dizielemanibulma(sayilar,10,bul);
	printf("Sayi dizinin %d.elemanidir.",(indis-&sayilar[0]+1));//+1 eklememizin sebebi ka��nc� s�rada oldu�unu g�rmekti.Aksi takdirde direkt indisi verir.
	
	return 0;
}

int dizielemanibulma(int *a,int n,int aranan)
{
	int *p,*bulunan;
	for (p=a;p<&a[n];p++)//p=a kodu ile a'n�n ilk eleman�n�n adresini p ye atam�� olduk.
	//ilk elememan�n adresini son eleman�n adresine kadar d�nd�r�yoruz (adres �zerinden d�ng� kurmu� olduk).
	{
		if (*p == aranan)
		{
			bulunan=p;
		}
	}
	return bulunan;
}
