#include <stdio.h>
#include <stdlib.h>

/* Struct - typedef */

typedef float virgullu; //float t�r�ndeki de�i�ken 'virgullu' kelimesi ile
typedef int tamsayi;//int t�r�ndeki de�i�ken 'tamsayi' kelimesi ile
typedef double buyuksayi;//double t�r�ndeki de�i�ken 'buyuksayi' kelimesi ile
typedef char islem;//char t�r�ndeki de�i�ken 'islem' kelimesi ile tan�mlanacakt�r

int main()
{
	virgullu sayi1,sayi2;//float sayi1,sayi2; yerine virgullu sayi1,sayi2; olarak tan�mlad�k.
	islem islem_turu;
	printf("-------Hesap Makinesi--------\n");
	printf("Ilk sayiyi girin:");
	scanf("%f",&sayi1);
	printf("Ikinci sayiyi girin:");
	scanf("%f",&sayi2);
	printf("Yapmak istediginiz islemi girin: 1:Toplama\t2:Cikarma\t3:Carpma\t4:Bolme\n");
	scanf("%s",&islem_turu);

	
	if (islem_turu == '1')
	{
		printf("Islem sonucunuz:%.2f",sayi1+sayi2);
	}
	else if (islem_turu == '2')
	{
		printf("Islem sonucunuz:%.2f",sayi1-sayi2);
	}
	else if (islem_turu == '3')
	{
		printf("Islem sonucunuz:%.2f",sayi1*sayi2);
	}
	else if (islem_turu == '4')
	{
		printf("Islem sonucunuz:%.2f",sayi1/sayi2);
	}
	else
	{
		printf("Gecerli bir islem ya da sayi girin\a");
	}
	return 0;
}
