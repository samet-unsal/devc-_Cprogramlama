#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct ogrenci
{
	float vize;
	float final;
	float odev;
	float ort;
};

int main() 
{
	struct ogrenci ogrenci_listesi[3];
	int i;
	for (i=0;i<3;i++)
	{
		printf("Lutfen %d.ogrencinin vizesini girin:",i+1);
		scanf("%f",&ogrenci_listesi[i].vize);
		printf("Lutfen %d.ogrencinin final notunu girin:",i+1);
		scanf("%f",&ogrenci_listesi[i].final);
		printf("Lutfen %d.ogrencinin odev notunu girin:",i+1);
		scanf("%f",&ogrenci_listesi[i].odev);
		ogrenci_listesi[i].ort=(ogrenci_listesi[i].vize+ogrenci_listesi[i].final+ogrenci_listesi[i].odev)/3;
	}
	printf("Ogrenci ortalamalari\n");
	for (i=0;i<3;i++)
	{
		printf("%d.ogrencinin ortalamasi:%.2f\n",i+1,ogrenci_listesi[i].ort);
	}
	
	return 0;
}
