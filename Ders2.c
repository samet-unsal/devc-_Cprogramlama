#include <stdio.h>
#include <stdlib.h>
// #define PI 3.14 // Sabit degiskenin ilk gosterimi define ile tanimlanirken sadece degisken adi ve degeri yazilir, degisken adi ve degeri yazmak zorunludur
const float PI = 3.14; //const ile yazarken const + degisken turu + degisken adi + degisken degeri vermek zorundayiz

/* Degisken adi tanimlanirken
1. Karakter + sayi + _ kullanýlabilir
2. Turkce karakter ve ozel isaretler kullanilmaz
3. Degisken rakamla baslamaz */

int main() 
{
	int x = 3;  // %d (decimal)
	float y= 5.4; //%f (float)
	char harf = 'A'; //%c (char)
	double z = 8.87; // %lf (buyuk kesirli sayi)
	char sehir[10] = "Adana"; // %s (string)
	
	printf("Tam Sayinin Degeri:%d\n",x);
	printf("Kesirli Sayinin Degeri:%f\n",y);
	printf("Karakterin Degeri:%c\n",harf);
	printf("Buyuk Kesirli Sayinin Degeri:%lf\n",z);
	printf("String Degeri:%s\n",sehir);
	printf("Sabit Degiskenin Degeri:%f\n", PI);
	printf("-------------------------\n");
	
	int sayi1= 5;
	float sayi2 = 4.5784;
	double sayi3= 287.54;
	char harf1 = 'Y';
	char sehir1[3]="Ankara";
	
	printf("Tam Sayinin Degeri:%06d\n",sayi1);// 000005
	printf("Kesirli Sayinin Degeri:%010.3f\n",sayi2); /* 000004.578 (%'den sonraki kisim bize kaç hane yazdiracagini soyler .3f ise virgulden sona kac basamak yazdýracagimizi soyler,
														tam sayi ve kesirlerde hane sayisi yetmese bile yazdirir.)*/ 
	printf("Uzun Kesirli Sayinin Degeri:%02.5lf\n",sayi3); // 287.54000
	printf("Karakterin Degeri:%010c\n",harf1);//000000000Y
	printf("Sehrinizin Ismi:%10s\n",sehir1);// 00000000Ank Stringlerde ise atanan hane kadar cikti verir
	
	printf("Kesirli Sayi Degeri:%-10.2f\n",sayi2); /* %'den sonra -ifadesinin olmasi degerin soldan baslayarak yazdirilmasini saglar
													  ancak bu sekildeki yazimda atanan hane sayisini doldurmak icin bos kalan hanelere 0 yazilmaz*/
	printf("Tam Sayi:%-10d\n",sayi1);
	printf("String Degeri:%-10c\n",sehir1); // stringlerde ekrana cikti basmiyor

	return 0;
}
