#include <stdio.h>
#include <stdlib.h>

/* Fonksiyon parametresi ve Pointerlar */

void f1(int);
void f2(int*);

int main() 
{
	int x = 12;
	printf("Ilk Deger:%d\n",x);
	f1(x);
	printf("f1 fonksiyonundan sonraki:%d\n",x);
	f2(&x);
	printf("f2 fonksiyonundan sonraki:%d\n",x);
	
	
	return 0;
}

void f1(int a)
{
	a=13;
	printf("f1 fonksiyonunda x:%d\n",a);
}
void f2(int *b)
{
	*b=5;
	printf("f2 fonksiyonunda x:%d\n",*b);
}
