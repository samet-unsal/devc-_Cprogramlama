#include <stdio.h>
#include <stdlib.h>

/* Struct - typedef */

typedef float virgullu; //float türündeki deðiþken 'virgullu' kelimesi ile
typedef int tamsayi;//int türündeki deðiþken 'tamsayi' kelimesi ile
typedef double buyuksayi;//double türündeki deðiþken 'buyuksayi' kelimesi ile
typedef char islem;//char türündeki deðiþken 'islem' kelimesi ile tanýmlanacaktýr

int main()
{
	virgullu sayi1,sayi2;//float sayi1,sayi2; yerine virgullu sayi1,sayi2; olarak tanýmladýk.
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
