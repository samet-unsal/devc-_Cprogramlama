#include <stdio.h>
#include <stdlib.h>

/* Pointer Yer Deðiþtirme */

void degistir(int*,int*);
int main()
{
	int a,b;
	a=25;
	b=4;
	printf("Degisimden once: A=%d, B=%d\n",a,b); //Degisimden once adresler: A=000000000062FE1C, B=000000000062FE18
	printf("Degisimden once adresler: A=%p, B=%p\n",&a,&b);
	degistir(&a,&b);//adresleri kullanarak adreslerdeki deðerleri pointerlar aracýlýðýyla deðiþtiriyoruz.
	printf("Degisimden sonra: A=%d, B=%d\n",a,b);	
	printf("Degisimden sonra adresler: A=%p, B=%p",&a,&b);//Degisimden sonra adresler: A=000000000062FE1C, B=000000000062FE18 adresler deðiþmedi sadece deðerler deðiþti.
	//dolaylý yoldan adresler de deðiþmiþ oldu.
	return 0;
}

void degistir(int *x,int *y)
{
	int temp;
	temp = *x;
	*x=*y;
	*y=temp;
}
