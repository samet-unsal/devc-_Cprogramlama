#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	char *pk,k = 'a';
	int *pt, t = 22;
	double *pq,q = 5.5;
	
	pk=&k;
	pt=&t;
	pq=&q;
	
	printf("%c'nin adresi:%p\n",k,pk);
	printf("%d'nin adresi:%p\n",t,pt);
	printf("%.2lf'nin adresi:%p\n",q,pq);
	
	pk++;
	pt--;
	pq+=10;
	
	printf("%c'nin yeni adresi:%p\n",*pk,pk);
	printf("%d'nin yeni adresi:%p\n",*pt,pt);
	printf("%lf'nin yeni adresi:%p\n",*pq,pq);
	return 0;
}
