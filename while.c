#include <stdio.h>
#include <stdlib.h>

/* while d�ng�s� */
//Kullan�c�dan al�nan say�ya kadar olan say�lar�n toplam�n� ekrana yazd�ran program.

int main() 
{
	int sayi, toplam=0;
	int i= 0;//while d�ng�s�nde ba�lang�� de�eri yoktur.
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	while (i < sayi)//ko�ul ifadesi
	{
		toplam+=i;
		i++;//whileda art�� azal��  tan�m� i�in
	}
	printf("Girdiginiz sayiya kadar olan sayilarin toplami:%d",toplam);

	return 0;
}
