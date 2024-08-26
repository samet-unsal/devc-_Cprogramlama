#include <stdio.h>
#include <stdlib.h>

/* Döngü Yapýlarý Örnek */

int main() 

{
	int sayi,i=0,tek_toplam=0,cift_toplam=0;
	printf("Lutfen bir sayi girin: ");
	scanf("%d",&sayi);
	
	for (i=0;i<=sayi;i++)
	{
		if (i % 2 == 0)
		{
			cift_toplam+=i;
		}
		
		else
		{
			tek_toplam+=i;
		}
	}
	
	printf("Tek sayilarin toplami: %d\n",tek_toplam);
	printf("Cift sayilarin toplami: %d",cift_toplam);
	
	return 0;
}
