#include <stdio.h>
#include <stdlib.h>

/* Büyükten küçüðe doðru sýrala */
void sirala(int *a,int n);
void degistir(int *a,int *b);
void printArray(int *array,int size);
int main() 
{
	int dizi[]={3,37,22,12,10,58,42,71,91,7};
	printf("Siralamadan once:");
	printArray(dizi,10);
	sirala(dizi,10);
	printf("Buyukten kucuge siralandiktan sonra:");
	printArray(dizi,10);

	return 0;
}

void sirala(int *array,int size)
{
	int i,j;
	for (i = 0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if (*(array+i)<*(array +j))//arrayi burada pointer olarak tanýmladýðýmýz için array(deðiþken ismi) direkt ilk elemaný (i=0) veriyor.
			//dolayýsýyla diðer elemanlar *(array +i) elemanlarý olarak çaðýrýlacak.
			{
				degistir(array + i,array +j);
			}
		}
	}
}

void degistir(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int *array,int size)
{
	int i;
	for (i=0;i<size;i++)
	{
		printf("%d\t",*(array +i));
	}
	printf("\n");
}
