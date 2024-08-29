#include <stdio.h>
#include <stdlib.h>

/* Fonksiyonlar devam - De�er d�nd�ren*/
//Kullan�c�dan al�nan say�n�n faktoriyelini FAKTORIYEL fonksiyonunu hesaplayarak main fonksiyonuyla ekrana yazd�rma
// De�er d�nd�ren fonksiyonlarda void ile tan�mlama yapamay�z.

int FAKTORIYEL(int);
int main()
{
	int sayi, fakt; //main i�inde tan�ml� de�i�ken
	printf("Lutfen bir sayi girin:");
	scanf("%d",&sayi);
	fakt = FAKTORIYEL(sayi);//fonksiyonun d�nd�rd��� de�eri ayr� bir de�i�kene atad�k. fonksiyonu direkt �a��rmad�k.
	printf("Girilen sayinin faktoriyeli:%d",fakt);
	return 0;
}

int FAKTORIYEL(int x)
{
	int fak = 1; //fonksiyon i�inde tan�mlanan de�i�ken
	int i;
	for (i=1;i<=x;i++)
	{
		fak*=i;
	}
	return fak;
}
