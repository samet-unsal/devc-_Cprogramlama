#include <stdio.h>
#include <stdlib.h>

/* Kullan�c�dan 5 adet say� al�n ve bu say�lar�n fakt�riyelini ekrana yazd�r�n
Kullan�c� negatif de�er girdi�inde uyar� verip d�ng� sonlans�n */


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
			i--; // bu kod ile beraber kullan�c�dan tam 5 tane say� alabiliriz ��nk� her negatif de�er girdi�inde sayac� 1 azaltacak
			continue;
		}
	}	
	return 0;
}
