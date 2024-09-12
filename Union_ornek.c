#include <stdio.h>
#include <stdlib.h>

/*  */

typedef union{
	int tempts;
	float tempf;
	char tempc;
	double tempd;
}gecici;

int main()
{
	int x,y;
	float a,b;
	char c,d;
	double e,f;
	gecici temp;
	int boyut=sizeof(temp);
	int olasiboyut= sizeof(x)+sizeof(a)+sizeof(c)+sizeof(e);
	
	x=20;
	y=95;
	a=60.51;
	b=20.2;
	c='s';
	d='m';
	e=78545482;
	f=48675421;
	
	temp.tempts=x;
	x=y;
	y=temp.tempts;
	
	temp.tempf=a;
	a=b;
	b=temp.tempf;
	
	temp.tempc=c;
	c=d;
	d=temp.tempc;
	
	temp.tempd=e;
	e=f;
	f=temp.tempd;
	printf("Degisimden sonraki durum:\n");
	printf("Int: x=%d y=%d\n",x,y);
	printf("Float: a=%.2f b=%.2f\n",a,b);
	printf("Char: c=%c d=%c\n",c,d);
	printf("Double: e=%.lf f=%.lf\n",e,f);
	printf("Toplam alan:%d\n",boyut);
	printf("Olasi boyut:%d",olasiboyut);
	return 0;
}
