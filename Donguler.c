#include <stdio.h>
#include <stdlib.h>

/* D�ng�ler*/

int main()
{
	int sayi, i,toplam=0;
	printf("Lutfen Bir Sayi Giriniz:");
	scanf("%d",&sayi);
	
	for(i=0;i<=sayi;i++)//for(ba�lang��;ko�ul;art�� v eya azal��)
	{
		toplam=toplam+i;
	}
	printf("Girdiginiz Sayiya Kadar Olan Sayilarin Toplami:%d",toplam);
	
	return 0;
}
