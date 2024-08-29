#include <stdio.h>
#include <stdlib.h>
#define PI 3.14// Global deðiþken - mainin üstünde tanýmlandýðý için tüm fonksiyonlarda tanýmlýdýr.
/* kullanýcýdan yarýçapý alýnan çemberin çevresini bulan fonksiyonu hesaplayarak main fonksiyonuna yazdýrýn.
pi 3.14 alýnacaktýr */
float cember_cevre_hesapla(int);// bu prototipi yukarýda tanýmlamazsak fonksiyon mainde çalýþmýyor.
int main() 
{
	int yaricap;//yerel deðiþken - sadece mainde geçerli
	printf("Lutfen yaricapi girin:");
	scanf("%d",&yaricap);
	printf("Girdiðiniz yaricapa sahip cemberin cevresi:%.2f",cember_cevre_hesapla(yaricap));
	
	return 0;
}


float cember_cevre_hesapla(int r)
{
	float cevre;// yerel deðiþken - çevre ve r deðiþkeni sadece bu fonksiyon için tanýmlýdýr.
	cevre = 2 * PI * r;
	return cevre;
}
