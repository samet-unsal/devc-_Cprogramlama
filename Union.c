#include <stdio.h>
#include <stdlib.h>

/* Union (Bile�im) */

typedef union{
	int x;
	float y;
}sayi;

int main()
{
	sayi deger;
	printf("Lutfen x degerini girin:");
	scanf("%d",&deger.x);
	printf("x'in degeri:%d\nx'in adresi:%p\n",deger.x,&deger.x);
	printf("Lutfen y degerini girin:");
	scanf("%f",&deger.y);
	printf("y'nin degeri:%.2f\ny'nin adresi:%p\n",deger.y,&deger.y);//ayn� bellekte son atanan de�i�kenin de�erini tutuyor.
	printf("x'in degeri:%d\nx'in adresi:%p\n",deger.x,&deger.x);
	return 0;
}
