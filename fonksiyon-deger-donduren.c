#include <stdio.h>
#include <stdlib.h>
#define PI 3.14// Global de�i�ken - mainin �st�nde tan�mland��� i�in t�m fonksiyonlarda tan�ml�d�r.
/* kullan�c�dan yar��ap� al�nan �emberin �evresini bulan fonksiyonu hesaplayarak main fonksiyonuna yazd�r�n.
pi 3.14 al�nacakt�r */
float cember_cevre_hesapla(int);// bu prototipi yukar�da tan�mlamazsak fonksiyon mainde �al��m�yor.
int main() 
{
	int yaricap;//yerel de�i�ken - sadece mainde ge�erli
	printf("Lutfen yaricapi girin:");
	scanf("%d",&yaricap);
	printf("Girdi�iniz yaricapa sahip cemberin cevresi:%.2f",cember_cevre_hesapla(yaricap));
	
	return 0;
}


float cember_cevre_hesapla(int r)
{
	float cevre;// yerel de�i�ken - �evre ve r de�i�keni sadece bu fonksiyon i�in tan�ml�d�r.
	cevre = 2 * PI * r;
	return cevre;
}
