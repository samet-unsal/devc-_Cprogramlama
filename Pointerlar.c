#include <stdio.h>
#include <stdlib.h>

/* Pointerlar */

int main()
{
	int sayi,*sayip;//pointer tan�mlarken '*' i�areti kullan�r�z.ilk tan�mdan sonra adres de�erini tutan
	//pointer� '*' ile �a��r�rsak bu sefer de�eri verir. 
	sayi=77;
	sayip=&sayi;
	printf("Sayi= %d\n",sayi);
	printf("Sayinin adresi:%p\n",sayip);
	printf("Pointer ile sayinin degeri:%d",*sayip);
	
	
	return 0;
}
