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
	/*struct pizza *siparis; //burada deðiþkeni pointerla oluþturduk
	siparis = (struct pizza*)malloc(sizeof(struct pizza));// oluþturduðumuz pointer için bellekte yer tanýmladýk.
	if (siparis == NULL)
	{
		printf("Bellek tahsisi baþarýsýz.\n");
		return 1;
	}
	
	bunun sonunda free(siparis);
	kodu yazmamýz gerekir.
	*/
	
	struct pizza siparisim;
	struct pizza *siparis=&siparisim;//siparis degiskenini pointer olarak aldýðýmýz için
	//onu da baþka bir struct deðiþkeni olan 'siparisim' adlý deðiþkenin adresine atadýk.
	//dolayýsýyla pointer artýk bir adresi iþaret ediyor.
	
	printf("Istediginiz pizzanin turunu girin:\n");
	scanf("%s",&siparis->tip);// pointerlarda deðer atayacaðýmýz için struct elemanýna eriþmek için -> yapýsýný kullandýk.
	printf("Lutfen taban tipini girin: 0 Ince\t 1 Normal \t 2 Dublex \t 3 Puf\n");
	scanf("%d",&siparis->taban);
	printf("Lutfen pizzanin boyutunu girin: 0 Kucuk\t 1 Orta\t 2 Buyuk\n");
	scanf("%d",&siparis->boyut);
	
	if ((*siparis).boyut == 0)//pointerýn baþýna * koyduk ve deðer almamýz gerekiyor o yüzden elemana '.' ile eriþtik.
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
