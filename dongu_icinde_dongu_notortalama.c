#include <stdio.h>
#include <stdlib.h>

/* 5 adet öğrencinin 3 adet notunu alarak her bir öğrencinin not ortalamasını hesaplayın */

int main() 
{	
	int i,j,ogrenci_not,toplam=0,ort;
	
	for (i=0;i<5;i++)
	{
		toplam = 0;
		for(j=0;j<3;j++)
		{
			printf("Lutfen %d nci ogrencinin %d nci notunu giriniz:\n",i+1,j+1);
			scanf("%d",&ogrenci_not);
			toplam+=ogrenci_not;
		}
		ort= toplam/3;
		printf("%d nci ogrencinin ortalamasi:%d\n",i+1,ort);
	}
	
	return 0;
}
