#include <stdio.h>
#include <stdlib.h>

/* switch-case yapýlarý */

int main() 
{
	double sayi1,sayi2,sonuc;
	int islem;
	printf("Ilk sayiyi giriniz: ");
	scanf("%lf",&sayi1);
	printf("Ikinci sayiyi giriniz: ");
	scanf("%lf",&sayi2);
	printf("Yapilacak islemi secin \n Toplama:1 \t Cikarma:2 \t Carpma:3 \t Bolme:4\n"); // \t ifadesi bir tab boþluk býrakarak yazdýrýr.
	scanf("%d",&islem);
	
	switch(islem)
	{
		case 1: // iþlemi integer olarak aldýðýmýz için caseleri yazarken de integer olarak yani '' olmadan yazarýz.
			sonuc = sayi1+sayi2;
			break;
		case 2:
			sonuc = sayi1-sayi2;
			break;
		case 3:
			sonuc = sayi1*sayi2;
			break;
		case 4:
			sonuc = sayi1/sayi2;
			break;
		default:
			printf("Yanlis islem girisi\n'");
			break;
	}
	printf("Islem sonucu:%lf",sonuc);
	return 0;
}
