#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void buyuk_kucuk(int,int);//prototip tanýmlama
int main() 

{
	int a,b;
	printf("Lutfen ilk sayiyi girin:");
	scanf("%d",&a);
	printf("Lutfen ikinci sayiyi girin:");
	scanf("%d",&b);
	
	buyuk_kucuk(a,b);	
	return 0;
}

void buyuk_kucuk(sayi1,sayi2)
{
	if (sayi1 > sayi2)
	{
		printf("Birinci sayi buyuk.");
	}
	else if (sayi2 > sayi1)
	{
		printf("Ikinci sayi buyuk.");
	}
	else
	{
		printf("Iki sayi birbirine esit.");
	}
}
