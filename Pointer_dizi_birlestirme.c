#include <stdio.h>
#include <stdlib.h>

/* Pointer ile dizi birleþtirme */

void string_birlestir(char *s1, char *s2)
{
	while (*s1 != '\0') /*Bu while döngüsü, s1 iþaretçisini s1 dizisinin sonundaki null karaktere ('\0') kadar kaydýrýr. 
	Bu sayede, s1 iþaretçisi artýk s1 dizisinin sonundadýr ve yeni karakterler eklemek için hazýrdýr.*/
	{
		s1++; // ilk stringin sonuna git
	}
	while (*s2 != '\0') /* Bu while döngüsü, s2 dizisinin her bir karakterini s1 dizisinin sonuna kopyalar.
	*s2 ifadesi s2 dizisindeki mevcut karakteri temsil eder ve bu karakter s1'deki mevcut pozisyona (*s1) kopyalanýr.
	Daha sonra, her iki iþaretçi (s1 ve s2) bir sonraki karaktere ilerletilir. Bu döngü s2 dizisinin sonundaki null karaktere ('\0') kadar devam eder.*/
	{
		*s1=*s2; // ikinci stringi kopyala
		s1++;
		s2++;
	}
	*s1= '\0';// null karakter ile sonlandýr.
}

int main()
{
	char s1[100] = "Merhaba,";
	char s2[] = "dunya!";
	string_birlestir(s1,s2);
	printf("Birlesik string: %s\n",s1);
	return 0;
}
