#include <stdio.h>
#include <stdlib.h>

/* while döngüsü ile fibonacci dizisi tanýmlama */

int main() 

{
	double n,t1 = 0, t2=1, nextTerm = 0;
	int sayac = 0;
	printf("Bir sayi girin:");
	scanf("%lf",&n);
	while (nextTerm<n)
	{
		sayac++; // sayacý direkt arttýrdýk çünkü ilk terimin 1.sýraya tekabül etmesi gerekiyor.
		t1=t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		printf("%d. terim %.lf\n",sayac,t2);
	}
	
	printf("Girilen sayidan kucuk en buyuk Fibonacci sayisi:%.2lf\n",t2);
	return 0;
}
