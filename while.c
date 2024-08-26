#include <stdio.h>
#include <stdlib.h>

/* while döngüsü */
//Kullanýcýdan alýnan sayýya kadar olan sayýlarýn toplamýný ekrana yazdýran program.

int main() 
{
	int sayi, toplam=0;
	int i= 0;//while döngüsünde baþlangýç deðeri yoktur.
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	while (i < sayi)//koþul ifadesi
	{
		toplam+=i;
		i++;//whileda artýþ azalýþ  tanýmý için
	}
	printf("Girdiginiz sayiya kadar olan sayilarin toplami:%d",toplam);

	return 0;
}
