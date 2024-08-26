#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int sayi1=1,sayi2=1,sayi3,sayi;
	int i;
	
	printf("Lutfen bir sayi girin:");
	scanf("%d",&sayi);
	printf("*************Fibonacci Serisi********\n");
	printf("%d\n",sayi1);
	printf("%d\n",sayi2);
	
	for (i=0;i<sayi;i++)
	{
		sayi3 = sayi1+sayi2;
		sayi1=sayi2;
		sayi2=sayi3;
		printf("%d\n",sayi3);
	}
	return 0;
}
