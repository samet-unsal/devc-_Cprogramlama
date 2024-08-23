#include <stdio.h>
#include <stdlib.h>

/* switch-case yapısı*/

int main() 

{
	int ay;
	printf("Kacinci ayda dogdunuz:\n");
	scanf("%d",&ay);
	
	switch(ay)
	{
		case 1:
			printf("Ocak ayinda dogdunuz");
			break;
		case 2:
			printf("Subat ayinda dogdunuz");
			break;
		case 3:
			printf("Mart ayinda dogdunuz");
			break;
		case 4:
			printf("Nisan ayinda dogdunuz");
			break;
		case 5:
			printf("Mayis ayinda dogdunuz");
			break;
		case 6:
			printf("Haziran ayinda dogdunuz");
			break;
		case 7:
			printf("Temmuz ayinda dogdunuz");
			break;
		case 8:
			printf("Agustos ayinda dogdunuz");
			break;
		case 9:
			printf("Eylul ayinda dogdunuz");
			break;
		case 10:
			printf("Ekim ayinda dogdunuz");
			break;
		case 11:
			printf("Kasim ayinda dogdunuz");
			break;
		case 12:
			printf("Aralik ayinda dogdunuz");
			break;
		default:
			printf("1 ve 12 dahil olmak uzere arasinda bir sayi giriniz.");
			break;
	}
	return 0;
}

