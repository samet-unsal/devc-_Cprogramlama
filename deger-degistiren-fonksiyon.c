#include <stdio.h>
#include <stdlib.h>

int deger_degistirme(int a[]);

int main()
{
	int dizi[]={10,20,30,40,50};
	int i;
	printf("**MAIN FONKSIYONUNDA**\n");
	for(i=0;i<5;i++)
	{
		printf("Dizinin %d nci Elemani:%d\n",i+1,dizi[i]);
	}
	deger_degistirme(dizi);
	printf("Maindeki Dizinin Ilk Elemani:%d\n",dizi[0]);//
	//pointerlar ve diziler bellek bilgisiyle i�lem yapt��� i�in fonksiyonun i�inde bir dizi eleman�n� de�i�tirsek bile
	// main fonksiyonunun i�inde de de�i�ir, ��nk� dizinin bellekteki adresine de�er atamas� yapar.s
	
	return 0;
}
int deger_degistirme(int a[])
{
	int j;
	printf("***deger degistirme fonksiyonunda***\n");
	for(j=0;j<5;j++)
	{
		printf("Dizinin %d nci Elemani:%d\n",j+1,a[j]);
	}
	a[0]=100;
	printf("A Dizisinin Ilk Elemani:%d\n",a[0]);
}
