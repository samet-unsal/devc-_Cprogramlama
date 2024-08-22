#include <stdio.h>
#include <stdlib.h>

/* Karar Yapýlarý Örnek 4 */

int main() 

{
	int sayi1,sayi2,islem;
	printf("Lutfen ilk sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	printf("Toplama icin 1'e basiniz:\n");
	printf("Cikarma icin 2'ye basiniz:\n");
	printf("Carpma icin 3'e basiniz:\n");
	printf("Bolme icin 4'e basiniz:\n");
	scanf("%d",&islem);
	
	if (islem == 1)
	{
		printf("Isleminizin sonucu:%d",sayi1+sayi2);
	}
	
	else if (islem == 2)
	{
		printf("Isleminizin sonucu:%d",sayi1-sayi2);
	}
	
	else if (islem == 3)
	{
		printf("Isleminizin sonucu:%d",sayi1*sayi2);
	}
	
	else if (islem == 4)
	{
		printf("Isleminizin sonucu:%d",sayi1/sayi2);
	}
	
	else
	{
		printf("Lutfen 1 ila 4 arasinda bir secenek girin!\a");
	}
	return 0;
}
