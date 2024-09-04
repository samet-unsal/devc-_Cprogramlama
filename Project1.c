#include <stdio.h>
#include <stdlib.h>

/* Pointer ve diziler */
	//int a[5] buradaki a, dizinin ilk elemanýnýn adresini tutar. ilk elemana atama yaparken dizinin adýný kullanabiliriz.//
	/*i bir tam sayý olmak üzere, kutle[i];
	ile *(p+1);
	ayný anlamdadýr. Bunun sebeli, p göstericisi kutle dizisinin baþlangýc adresini tutmuþ olmasýdýr. p+1 iþlemi ile i+1.elemanýn adresi ve *(p+1) ile de bu adresteki deðer hesaplanýr.*/
	
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
	/*int i;
	double *parabalar;
	parabalar=a;
	double top=0,o;
	for (i=0;i<n;i++)
	{
		top+=*(parabalar+i);//adresleri üzerinden deðerleri buluyoruz. dizinin ismi direkt ilk elemanýn adresine atandýðý için *(deðiþken adý+i) ile deðerlerini toplayabiliriz.
	}*/
	
	/*double *parabalar;
	double top=0,o;
	for (parabalar=a;parabalar<&a[n];parabalar++)
	{
		top+=*parabalar;
	}*/
	
	int i;
	double *parabalar;
	parabalar=a;
	double top=0,o;
	for (i=0;i<n;i++)
	{
		top+=*a++;
	}
	o = top/n;
	return o;
}
