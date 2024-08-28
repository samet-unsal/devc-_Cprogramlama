#include <stdio.h>
#include <stdlib.h>

/* Ýki boyutlu diziler */

int main() 
{
	int dizi[3][4]={2,1,2,3,4,5,6,7,8,9,10,11};
	int i,j;
	int toplam=0;
	int carpim=1;
	
	printf("Dizinin 2.satir 3.sutun elemani:%d\n\n",dizi[1][2]);
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d.satirin %d.sutun elemani:%d\n\n",i+1,j+1,dizi[i][j]);
			toplam+=dizi[i][j];
			carpim*=dizi[i][j];
		}
	}
	
	printf("Dizi Elemanlarinin Toplami:%d\n",toplam);
	printf("Dizi Elemanlarinin Carpimi:%d",carpim);
	return 0;
}
