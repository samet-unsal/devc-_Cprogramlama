#include <stdio.h>
#include <stdlib.h>

/* Diziler takým puaný ornegi */

int main() 
{
	int sonuclar[10]={0,1,2,0,1,2,1,1,0,0};
	int toplam_puan;
	int i;
	for (i=0;i<10;i++)
	{
		if (sonuclar[i] == 0)
		{
			toplam_puan+=1;
		}
		
		else if (sonuclar[i] == 1)
		{
			toplam_puan+=3;
		}
		
		else//gerekli degil
		{
			toplam_puan+=0;
		}
	}
	
	if (toplam_puan < 18)
	{
		printf("Puaniniz:%d, ligden dustunuz.\n",toplam_puan);
	}
	else
	{
		printf("Puaniniz:%d, kumede kaldiniz.",toplam_puan);
	}
	
	return 0;
}
