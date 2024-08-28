#include <stdio.h>
#include <stdlib.h>

/* 3 öðrenciye ait 2 not alarak her bir öðrencinin not ortalamasýný ekrana yazdýrýn */

int main() 

{
	float notlar[3][2];
	float toplam=0;
	float ort;
	int i,j;
	
	for (i=0;i<3;i++)
	{
		toplam=0;
		for (j=0;j<2;j++)
		{
			printf("%d.ogrencinin %d.notunu girin:",i+1,j+1);
			scanf("%f",&notlar[i][j]);
			toplam+=notlar[i][j];
			ort=toplam/2;
		}
		printf("%d.ogrencinin not ortalamasi:%.2f\n",i+1,toplam/2);
		if (ort >= 90 && ort<=100)
		{
			printf("A\n");
		}
		else if (ort >= 80 && ort<90)
		{
			printf("B\n");
		}
		else if (ort >= 70 && ort<80)
		{
			printf("C\n");
		}
		else if (ort >= 60 && ort<70)
		{
			printf("DC\n");
		}
		else if (ort >= 50 && ort<60)
		{
			printf("DD\n");
		}
		else
		{
			printf("Kaldiniz\n");
		}
	}
	
	return 0;
}
