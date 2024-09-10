#include <stdio.h>
#include <stdlib.h>

/* ------Struct ve Fonksiyonlar--------
3 ��rencinin giri� fonksiyonuyla verileri al�narak orta fonksiyonuyla ortalamalar hesaplanarak yazd�r fonksiyonuyla ��kt� al�nmas� 
ogrenci ad�, ogrenci no, vize, final,�dev,ortalama */

struct ogrenci{
	char o_adi[20];
	int o_no;
	float vize;
	float final;
	int odev;
	float ort;
};

void ogrenci_kayit(struct ogrenci a[],int n);
float ortalama(float a, float b, float c);
void yazdir(struct ogrenci c[],int k);

int main()
{
	struct ogrenci o_liste[3];
	ogrenci_kayit(o_liste,3);
	/*ortalama(o_liste,3); ortalama fonksiyonunu veri giri�i alma fonksiyonunun i�inde tan�mlam�� olmasayd�k i�ine g�nderece�imiz struct yap�s�yla 
	ayr�ca main fonksiyonu i�inde tan�mlamam�z gerekecekti.*/
	yazdir(o_liste,3);
	
	return 0;
}

void ogrenci_kayit(struct ogrenci a[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("%d.Ogrenci adi:",i+1);
		scanf("%s",&a[i].o_adi);
		printf("%d.Ogrenci no:",i+1);
		scanf("%d",&a[i].o_no);
		printf("%d.Ogrenci Vize:",i+1);
		scanf("%f",&a[i].vize);
		printf("%d.Ogrenci Final:",i+1);
		scanf("%f",&a[i].final);
		printf("%d.ogrenci Odev:",i+1);
		scanf("%d",&a[i].odev);
		a[i].ort=ortalama(a[i].vize,a[i].final,a[i].odev);
	}
}

float ortalama(float a, float b, float c)
{
	
	/*
	float ortalama(ogrenci b[],int m)
	{
		float toplam=0;
		float orta;
		for (i=0;i<3;i++)
		{
			toplam+=b[i].vize;
			toplam+=b[i].final;
			toplam+=b[i].odev;
			orta = toplam/3;
			b[i].ort=orta;
		
		}
		return orta;
	}
	*/
	return (a+b+c)/3;
}

void yazdir(struct ogrenci c[],int k)
{
	printf("Ogrenci Bilgileri\n--------------\n");
	int i=0;
	for (i=0;i<k;i++)
	{
		printf("%d.Ogrencinin Ismi:%s\tOgrencinin Numarasi:%d\tNot ortalamasi:%.2f\n",i+1,c[i].o_adi,c[i].o_no,c[i].ort);
	}
}
