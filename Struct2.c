#include <stdio.h>
#include <stdlib.h>

/* Struct Pointer */

struct pizza
{
	char tip[20];
	int boyut;
	int taban;
	float fiyat;
	float kalori;
};

int main()
{
	/*struct pizza *siparis; //burada de�i�keni pointerla olu�turduk
	siparis = (struct pizza*)malloc(sizeof(struct pizza));// olu�turdu�umuz pointer i�in bellekte yer tan�mlad�k.
	if (siparis == NULL)
	{
		printf("Bellek tahsisi ba�ar�s�z.\n");
		return 1;
	}
	
	bunun sonunda free(siparis);
	kodu yazmam�z gerekir.
	*/
	
	struct pizza siparisim;
	struct pizza *siparis=&siparisim;//siparis degiskenini pointer olarak ald���m�z i�in
	//onu da ba�ka bir struct de�i�keni olan 'siparisim' adl� de�i�kenin adresine atad�k.
	//dolay�s�yla pointer art�k bir adresi i�aret ediyor.
	
	printf("Istediginiz pizzanin turunu girin:\n");
	scanf("%s",&siparis->tip);// pointerlarda de�er atayaca��m�z i�in struct eleman�na eri�mek i�in -> yap�s�n� kulland�k.
	printf("Lutfen taban tipini girin: 0 Ince\t 1 Normal \t 2 Dublex \t 3 Puf\n");
	scanf("%d",&siparis->taban);
	printf("Lutfen pizzanin boyutunu girin: 0 Kucuk\t 1 Orta\t 2 Buyuk\n");
	scanf("%d",&siparis->boyut);
	
	if ((*siparis).boyut == 0)//pointer�n ba��na * koyduk ve de�er almam�z gerekiyor o y�zden elemana '.' ile eri�tik.
	{
		siparis->fiyat = 100;
		siparis->kalori = 500;
	}
	else if ((*siparis).boyut == 1)
	{
		siparis->fiyat = 200;
		siparis->kalori = 1000;
	}
	else if ((*siparis).boyut == 2)
	{
		siparis->fiyat = 300;
		siparis->kalori = 1500;
	}
	
	printf("Siparis bilgileriniz\n");
	printf("Tipi: %s\t Taban: %d\t Boyut: %d\t Fiyat: %.2f\t Kalori:%.2f",siparis->tip,siparis->taban,siparis->boyut,siparis->fiyat,siparis->kalori);
	return 0;
}
