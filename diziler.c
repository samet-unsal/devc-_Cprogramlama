#include <stdio.h>
#include <stdlib.h>

/* Diziler */

int main() 
{
	float kutle[5],toplam=0;
	int i;
	for (i=0;i<5;i++)
	{
		printf("Lutfen %d.agirligi giriniz:",i+1);
		scanf("%f",&kutle[i]);
		toplam+=kutle[i];
	}
	printf("Toplam Kutle=%.2f\n",toplam);
	
	for (i=0;i<5;i++)
	{
		printf("%d. kutle: %.1f\n",i+1,kutle[i]);
	}
	return 0;
}
