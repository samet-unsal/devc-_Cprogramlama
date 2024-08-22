#include <stdio.h>
#include <stdlib.h>
//#define PI 3.14

/* Girdi cikti fonksiyonlari */

int main() 

{
	const float PI = 3.14;
	float yari_cap, alan, cevre;
	printf("Lutfen dairenin yaricapini giriniz:");
	scanf("%f",&yari_cap);
	alan = PI*yari_cap*yari_cap;
	cevre = 2*PI*yari_cap;
	printf("Dairenin alani:%f\n",alan);
	printf("Cemberin cevresi:%f\n",cevre);



	return 0;
}

