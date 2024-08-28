#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void toplama(a);//prototip tanýmlarken sadece deðiþken türünü yazsak bile yeterli olur
//void dikdortgen_alani(int,int) gibi
void faktoriyel_bulma(b);//prototip

int main() 
{
	int sayi;
	printf("Lutfen bir sayi girin:");
	scanf("%d",&sayi);
	toplama(sayi);
	faktoriyel_bulma(sayi);

	return 0;
}

void toplama(a)
{
	int toplam=0;
	int i;
	for (i=0;i<=a;i++)
	{
		toplam+=i;
	}
	printf("%d.sayiya kadar olan sayilarin toplami:%d\n",a,toplam);
}

void faktoriyel_bulma(b)
{
	int faktoriyel=1;
	int i;
	for (i=1;i<=b;i++)
	{
		faktoriyel*=i;
	}
	printf("Girdiginiz sayinin faktoriyeli:%d",faktoriyel);
}
