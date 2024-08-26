#include <stdio.h>
#include <stdlib.h>

/* Kullanıcıdan 5 adet sayı alın ve bu sayıların faktöriyelini ekrana yazdırın
Kullanıcı negatif değer girdiğinde uyarı verip döngü sonlansın */


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
			i--; // bu kod ile beraber kullanıcıdan tam 5 tane sayı alabiliriz çünkü her negatif değer girdiğinde sayacı 1 azaltacak
			continue;
		}
	}	
	return 0;
}
