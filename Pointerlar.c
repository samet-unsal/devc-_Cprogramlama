#include <stdio.h>
#include <stdlib.h>

/* Pointerlar */

int main()
{
	int sayi,*sayip;//pointer tanýmlarken '*' iþareti kullanýrýz.ilk tanýmdan sonra adres deðerini tutan
	//pointerý '*' ile çaðýrýrsak bu sefer deðeri verir. 
	sayi=77;
	sayip=&sayi;
	printf("Sayi= %d\n",sayi);
	printf("Sayinin adresi:%p\n",sayip);
	printf("Pointer ile sayinin degeri:%d",*sayip);
	
	
	return 0;
}
