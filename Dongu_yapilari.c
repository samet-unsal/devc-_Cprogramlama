#include <stdio.h>
#include <stdlib.h>

/* D�ng� Yap�lar� */

int main() 

{
	
	int sayi,i,faktoriyel=1;
	printf("Girmek istediginiz sayi:");
	scanf("%d",&sayi);
	
	if (sayi == 0 || sayi == 1)
		{
			printf("0 ve 1'in fakt�riyeli 1'dir");
		}
	
	else
		{
			for (i=1; i<=sayi;i++)
			{
				faktoriyel= faktoriyel*i;
			}
			printf("Girdiginiz sayinin faktoriyeli:%d",faktoriyel);
		}

	return 0;
}
