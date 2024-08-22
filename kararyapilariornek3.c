#include <stdio.h>
#include <stdlib.h>

/* Karar Yapıları Örnek 4 */

int main() 

{
	
	float boy,kilo,VKI;
	printf("Lutfen kilonuzu giriniz:");
	scanf("%f",&kilo);
	printf("Lutfen boyunuzu giriniz:");
	scanf("%f",&boy);
	VKI = kilo/(boy*boy);
	printf("Vucut kitle endeksiniz:%.2f\n",VKI);
	
	if (VKI <=18.5 && VKI >=0)
	{
		printf("Ekmek ye namert");
	}
	
	else if (VKI > 18.5 && VKI < 24.9)
	{
		printf("Aynen devam");
	}
	else if (VKI > 24.9 && VKI <29.9)
	{
		printf("Azicik dikkat");
	}
	else if (VKI >29.9 && VKI < 39.9)
	{
		printf("Ekmegi kes artik");
	}
	else
		{
			printf("Lutfen Kilogram Olarak (5.4 kg) Kilonuzu ve Metre Olarak (1.7m) Boyunuzu Giriniz!!!\a");
		}
	return 0;
}
