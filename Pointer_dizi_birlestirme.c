#include <stdio.h>
#include <stdlib.h>

/* Pointer ile dizi birle�tirme */

void string_birlestir(char *s1, char *s2)
{
	while (*s1 != '\0') /*Bu while d�ng�s�, s1 i�aret�isini s1 dizisinin sonundaki null karaktere ('\0') kadar kayd�r�r. 
	Bu sayede, s1 i�aret�isi art�k s1 dizisinin sonundad�r ve yeni karakterler eklemek i�in haz�rd�r.*/
	{
		s1++; // ilk stringin sonuna git
	}
	while (*s2 != '\0') /* Bu while d�ng�s�, s2 dizisinin her bir karakterini s1 dizisinin sonuna kopyalar.
	*s2 ifadesi s2 dizisindeki mevcut karakteri temsil eder ve bu karakter s1'deki mevcut pozisyona (*s1) kopyalan�r.
	Daha sonra, her iki i�aret�i (s1 ve s2) bir sonraki karaktere ilerletilir. Bu d�ng� s2 dizisinin sonundaki null karaktere ('\0') kadar devam eder.*/
	{
		*s1=*s2; // ikinci stringi kopyala
		s1++;
		s2++;
	}
	*s1= '\0';// null karakter ile sonland�r.
}

int main()
{
	char s1[100] = "Merhaba,";
	char s2[] = "dunya!";
	string_birlestir(s1,s2);
	printf("Birlesik string: %s\n",s1);
	return 0;
}
