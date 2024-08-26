#include <stdio.h>
#include <stdlib.h>

/* Kullanýcýdan 5 adet sayý alýn ve bu sayýlarýn faktöriyelini ekrana yazdýrýn
Kullanýcý negatif deðer girdiðinde uyarý verip döngü sonlansýn */


int main()
{
	int i,j,sayi,faktoriyel=1;
	
	for (i=0;i<5;i++)
	{
		printf("Bir sayi giriniz:");
		scanf("%d",&sayi);
		
		if (sayi >= 0)
		{
			faktoriyel=1;
			for (j=1;j<=sayi;j++)
			{
				faktoriyel*=j; 
			}
			printf("Girdiginiz sayinin faktoriyerli:%d\n",faktoriyel);
		}
		
		else
		{
			continue;
		}
	}	
	return 0;
}
