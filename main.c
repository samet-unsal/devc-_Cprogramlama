#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()

{
	float vize,final,odev;
	float ort;
	printf("Lutfen vize notunuzu giriniz:");
	scanf("%f",&vize);
	printf("Lutfen final notunuzu giriniz:");
	scanf("%f",&final);
	printf("Lutfen odev notunuzu giriniz:");
	scanf("%f",&odev);
	ort = (vize + final + odev) / 3;
	printf("Ortalamaniz:%f\n",ort);
	
	
	if(ort>=90 && ort <= 100)
	{
		printf("Tebrikler A ile gectiniz.");
	}
	else if (ort >=80 && ort <90)
	{
		printf("Tebrikler B ile gectiniz.");
	}
	else if (ort >=70 && ort <80)
	{
		printf("Tebrikler C ile geçtiniz.");
	}
	else if (ort >=60 && ort <70)
	{
		printf("Tebrikler D ile gectiniz.");
	}
	else if (ort <60 && ort >=0)
	{
		printf("Uzgunuz F ile kaldiniz.");
	}
	else
	{
		printf("Lutfen 0 ila 100 arasinda notlar giriniz!\a");
	}
	
	return 0;
}
