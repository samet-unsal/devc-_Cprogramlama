#include <stdio.h>
#include <stdlib.h>

/* Karar Yapýlarý */

int main() 

{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi % 2 == 0)
	{
		printf("Girdiginiz Sayi Cifttir.");
	}
	
	else
	{
		printf("Girdiginiz Sayi Tektir.");
	}
	
	
	return 0;
}
