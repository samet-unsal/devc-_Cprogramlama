#include <stdio.h>
#include <stdlib.h>

/* Pointer ve diziler */
	//int a[5] buradaki a, dizinin ilk eleman�n�n adresini tutar. ilk elemana atama yaparken dizinin ad�n� kullanabiliriz.//
	/*i bir tam say� olmak �zere, kutle[i];
	ile *(p+1);
	ayn� anlamdad�r. Bunun sebeli, p g�stericisi kutle dizisinin ba�lang�c adresini tutmu� olmas�d�r. p+1 i�lemi ile i+1.eleman�n adresi ve *(p+1) ile de bu adresteki de�er hesaplan�r.*/
	
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
		top+=*(parabalar+i);//adresleri �zerinden de�erleri buluyoruz. dizinin ismi direkt ilk eleman�n adresine atand��� i�in *(de�i�ken ad�+i) ile de�erlerini toplayabiliriz.
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
