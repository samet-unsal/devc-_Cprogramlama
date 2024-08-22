#include <stdio.h>
#include <stdlib.h>

/* Karar Yapıları Örnek */

int main() 

{
	int sayi1,sayi2;
	printf("Lutfen ilk sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	
	if (sayi1 > sayi2)
	{
		printf("Ilk sayi buyuktur.\n");
	}
	
	else if (sayi2 > sayi1)
	{
		printf("Ikinci sayi buyuktur.");
	}
	
	else
	{
		printf("Sayilar birbirine esittir.");
	}
	
	return 0;
}
