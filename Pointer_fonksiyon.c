#include <stdio.h>
#include <stdlib.h>
/* Pointer Fonksiyon */

void verigirisi(double a[5][4],int n,int m);
void ort(double a[5][4], double *d,int p,int q);
int main()
{
	double ogrenciler[5][4];
	double ortalama[5];
	int i,j;
	verigirisi(ogrenciler,5,4);
	ort(ogrenciler,ortalama,5,4);
	for (i=0;i<5;i++)
	{
		printf("%d.ogrencinin ders ortalamasi:%.2lf'tir.\n",i+1,ortalama[i]);
	}
	return 0;
}

void verigirisi(double a[5][4],int n,int m)
{
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("Lutfen %d.ogrencinin %d.notunu girin:",i+1,j+1);
			scanf("%lf",&a[i][j]);
		}
	}
}

void ort(double c[5][4], double *d,int p,int q)
{
	int i,j;
	double toplam=0.0;
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)
		{
			toplam+=c[i][j];
		}
		d[i]=toplam/4;
		toplam=0;
	}
		
}
