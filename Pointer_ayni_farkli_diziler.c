#include <stdio.h>
#include <stdlib.h>

/* a ve b dizilerinin ayn� olup olmad���n� kontrol fonksiyonu ile kontrol edip
main fonksiyonunda ayn� veya de�il diye yazd�ran program� yaz�n */

int ayni_mi(int *a,int *b,int uzunluk);

int main()
{
	int sonuc;
	int ilkdizi[]={3,7,5,10,65,13,27,15,22,600,69,18,58,30,42,2};
	int ikincidizi[]={3,7,5,10,65,13,27,15,22,600,69,18,58,30,42,2};
	if (ayni_mi(ilkdizi,ikincidizi,16))
	{
		printf("Diziler Ayni");
	}
	else
	{
		printf("Diziler Farkli");
	}
	return 0;
}

int ayni_mi(int *a,int *b,int uzunluk)
{
	int i;
	for (i=0;i<uzunluk;i++)
	{
		if (*(a+i) !=(*(b+i)))/*(a+i) ve (b+i) mant���nda ilk eleman direkt de�i�kenin ad�na e�it oldu�u i�in iki dizide de
		 +i kadar ilerleme yap�yoruz ��nk� pointerlarla �al���yoruz ve parantez d���ndaki * ile de�erini getiriyoruz. */
		{
			return 0;
		}
	}
	return 1;	
}

