#include <stdio.h>
#include <stdlib.h>

/* Fonksiyonlar */
//1. Parametrelere g�re: -alan -almayan
//2. De�er d�nd�rmeye g�re: -d�nd�ren -d�nd�rmeyen
//3. De�er de�i�tirmeye g�re: -de�i�tiren -de�i�tirmeyen


/*int Yaz()
{
	printf("Fonksiyon Ornegi.\n");
}

int okulp()
{
	int i;
	for (i=0;i<10;i++)
	{
		printf("Gelisim Uni\n");
	}
}

int okul(int s)
{
	int i;
	for (i=0;i<s;i++)
	{
		printf("Gelisim Universitesi\n");
	}
}*/

// Kullan�c�dan kenar uzunlu�u al�p kare alan�n� hesaplama

int KARE_ALAN(int x)
{
	int alan;
	alan = x*x;
	printf("Kenarin alani:%d\n",alan);
}

// Kullan�c�dan iki kenar uzunlu�u al�p dikd�rtgen �evresi hesaplama
int dikdortgen_cevre(int a ,int b)
{
	int cevre;
	cevre = 2*(a+b);
	printf("Dikdortgenin cevresi:%d",cevre);
}
int main()
{
	
	int kenar;
	printf("Lutfen Karenin Bir Kenarini Giriniz:");
	scanf("%d",&kenar);
	KARE_ALAN(kenar);
	
	int ilk_kenar, ikinci_kenar;
	
	printf("Lutfen ilk kenari giriniz:");
	scanf("%d",&ilk_kenar);
	printf("Lutfen ikinci kenari giriniz:");
	scanf("%d",&ikinci_kenar);
	dikdortgen_cevre(ilk_kenar,ikinci_kenar);
	
	
	//Yaz();
	//okulp();//parametre almayan
	//okul(10);//parametre alan
	

	return 0;
}
