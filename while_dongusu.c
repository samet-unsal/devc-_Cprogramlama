#include <stdio.h>
#include <stdlib.h>

/* while döngüsü */
//Kullanıcıdan alınan sayıya kadar olan sayıların toplamını ekrana yazdıran program.

int main() 
{
	int sayi, toplam=0;
	int i= 0;//while döngüsünde başlangıç değeri yoktur.
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	while (i < sayi)//koşul ifadesi
	{
		toplam+=i;
		i++;//whileda artış azalış  tanımı için
	}
	printf("Girdiginiz sayiya kadar olan sayilarin toplami:%d",toplam);

	return 0;
}
