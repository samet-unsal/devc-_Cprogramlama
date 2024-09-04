#include <stdio.h>
#include <stdlib.h>

/* Pointer ve diziler */
	//int a[5] buradaki a, dizinin ilk elemanının adresini tutar. ilk elemana atama yaparken dizinin adını kullanabiliriz.//
	/*i bir tam sayı olmak üzere, kutle[i];
	ile *(p+1);
	aynı anlamdadır. Bunun sebeli, p göstericisi kutle dizisinin başlangıc adresini tutmuş olmasıdır. p+1 işlemi ile i+1.elemanın adresi ve *(p+1) ile de bu adresteki değer hesaplanır.*/
	
double ortalama(double a[5],int n);
int main()
{
	double arabalar[5]={7.36,8.24,13.07,11.5,12.3};
	double ort;
	ort=ortalama(arabalar,5);
	printf("Sayilarin Ortalamasi:%.2lf",ort);
	return 0;
}

double ortalama(double a[5],int n)
{
	int i;
	double *parabalar;
	parabalar=a;
	double top=0,o;
	for (i=0;i<n;i++)
	{
		top+=*(parabalar+i);//adresleri üzerinden değerleri buluyoruz. dizinin ismi direkt ilk elemanın adresine atandığı için *(değişken adı+i) ile değerlerini toplayabiliriz.
	}
	o = top/n;
	return o;
}
