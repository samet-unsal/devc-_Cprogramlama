#include <stdio.h>
#include <stdlib.h>

/* 5 öðrencinin 4 notunu kullanýcýdan alan, ortalamalarýný ve toplamalrýný verene ayrý ayrý fonksiyonlarýn yazdýrýlýp
main içinde çaðýrýlmasý. */
void toplama(float notlar[5][4],int x,int y);
void giris(float b[5][4],int m,int n);
int main()
{
	float notlar [5][4];
	int i,j;
	giris(notlar,5,4);
	toplama(notlar,5,4);
	
	return 0;
}
void toplama(float a[5][4],int x, int y)
{
	int i,j;
	float toplam=0,ort;
	for (i=0;i<x;i++)
	{
		for (j=0;j<y;j++)
		{
			toplam+=a[i][j];
		}
		printf("%d.ogrencinin not toplami:%.2f\n",i+1,toplam);
		ort=toplam/4;
		printf("%d.ogrencinin not ortalamasi:%.21f\n",i+1,ort);
		toplam=0;
	}
}

void giris(float b[5][4],int m,int n)
{
	int i,j;
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Lutfen %d.ogrencinin %d.notunu girin:\n",i+1,j+1);
			scanf("%f",&b[i][j]);
		}
	}
}
