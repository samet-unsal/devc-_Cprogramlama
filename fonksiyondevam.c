#include <stdio.h>
#include <stdlib.h>

/* Fonksiyonlar devam - Deðer döndüren*/
//Kullanýcýdan alýnan sayýnýn faktoriyelini FAKTORIYEL fonksiyonunu hesaplayarak main fonksiyonuyla ekrana yazdýrma
// Deðer döndüren fonksiyonlarda void ile tanýmlama yapamayýz.

int FAKTORIYEL(int);
int main()
{
	int sayi, fakt; //main içinde tanýmlý deðiþken
	printf("Lutfen bir sayi girin:");
	scanf("%d",&sayi);
	fakt = FAKTORIYEL(sayi);//fonksiyonun döndürdüðü deðeri ayrý bir deðiþkene atadýk. fonksiyonu direkt çaðýrmadýk.
	printf("Girilen sayinin faktoriyeli:%d",fakt);
	return 0;
}

int FAKTORIYEL(int x)
{
	int fak = 1; //fonksiyon içinde tanýmlanan deðiþken
	int i;
	for (i=1;i<=x;i++)
	{
		fak*=i;
	}
	return fak;
}
