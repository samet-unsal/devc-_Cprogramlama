#include <stdio.h>
#include <stdlib.h>

/* Döngüler*/

int main()
{
	int sayi, i,toplam=0;
	printf("Lutfen Bir Sayi Giriniz:");
	scanf("%d",&sayi);
	
	for(i=0;i<=sayi;i++)//for(baþlangýç;koþul;artýþ v eya azalýþ)
	{
		toplam=toplam+i;
	}
	printf("Girdiginiz Sayiya Kadar Olan Sayilarin Toplami:%d",toplam);
	
	return 0;
}
