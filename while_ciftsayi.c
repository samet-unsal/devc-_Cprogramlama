#include <stdio.h>
#include <stdlib.h>

/* Kullanýcýdan alýnan sayýya kadar olan tek ve çift sayýlarýn toplamýný while döngüsü ile ekrana yazdýrma */

int main()
{
	int sayi,i=1,tek_toplam=0,cift_toplam=0;
	printf("Lutfen bir sayi girin: ");
	scanf("%d",&sayi);
	
	while (i<= sayi)
	{
		if (i % 2 == 0)
		{
			cift_toplam+=i;
		}
		else
		{
			tek_toplam+=i;
		}
		i++;
	}
	
	printf("%d.sayiya kadar (%d dahil) olan tek sayilarin toplami: %d\n",sayi,sayi,tek_toplam);
	printf("%d.sayiya kadar (%d dahil) olan cift sayilarin toplami: %d",sayi,sayi,cift_toplam);

	return 0;
}
