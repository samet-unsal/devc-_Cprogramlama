#include <stdio.h>
#include <stdlib.h>
#define PI 3.14 //sabit de�er tan�mlama
//const float PI = 3.14; di�er tan�mlama y�ntemi
/* Fonksiyonlar yerel ve global de�i�kenler*/
//Kullan�c�dan yar��ap� al�nan dairenin alan�n�n hesaplayan fonksiyon

void daire_alan(r) // de�er d�nd�rmeyen fonksiyonu belirtir.
//de�er d�nd�rmeyen fonksiyonu tan�mlarken void yerine int,float,char veya double yazsak da sorun olmaz
//ancak de�er d�nd�ren fonksiyonda void yazamay�z.
{
	float alan = PI * r * r;
	printf("Dairenin alani:%.2f",alan);
}

int main() 
{
	int yaricap;
	printf("Lutfen yaricap giriniz:");
	scanf("%d",&yaricap);
	daire_alan(yaricap);
	
	return 0;
}
