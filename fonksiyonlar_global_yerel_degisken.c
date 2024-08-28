#include <stdio.h>
#include <stdlib.h>
#define PI 3.14 //sabit deðer tanýmlama
//const float PI = 3.14; diðer tanýmlama yöntemi
/* Fonksiyonlar yerel ve global deðiþkenler*/
//Kullanýcýdan yarýçapý alýnan dairenin alanýnýn hesaplayan fonksiyon

void daire_alan(r) // deðer döndürmeyen fonksiyonu belirtir.
//deðer döndürmeyen fonksiyonu tanýmlarken void yerine int,float,char veya double yazsak da sorun olmaz
//ancak deðer döndüren fonksiyonda void yazamayýz.
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
