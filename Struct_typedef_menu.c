#include <stdio.h>
#include <stdlib.h>

/* Menu Kayit ve Yazdirma Programi */

typedef struct{
	int y_id;
	char yemek_adi[20];
	float fiyat;
	float kalori;
}yemek;

typedef struct{
	char kategori[20];
	char menu_adi[20];
	yemek liste[3];	
}menu;

void menu_kayit(menu a[],int n,int m);
void menu_yazdir(menu b[],int p,int q);
int main()
{
	menu restoran[2];
	menu_kayit(restoran,2,3);
	menu_yazdir(restoran,2,3);
	return 0;
}

void menu_kayit(menu a[],int n,int m)
{
	printf("-----Menu Kayit--------\n");
	int i,j;
	for (i=0;i<n;i++)
	{
		printf("%d.menunun adini girin:",i+1);
		scanf("%s",&a[i].menu_adi);
		printf("%d.menunun kategorisini girin:",i+1);
		scanf("%s",&a[i].kategori);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("%d.menunun %d.yemeginin ID'sini girin:",i+1,j+1);
			scanf("%d",&a[i].liste[j].y_id);
			printf("%d.menunun %d.yemeginin adini girin:",i+1,j+1);
			scanf("%s",&a[i].liste[j].yemek_adi);
			printf("%d.menunun %d.yemeginin fiyatini girin:",i+1,j+1);
			scanf("%f",&a[i].liste[j].fiyat);
			printf("%d.menunun %d.yemeginin kalorisini girin:",i+1,j+1);
			scanf("%f",&a[i].liste[j].kalori);
		}
	}
}

void menu_yazdir(menu b[],int p,int q)
{
	printf("------Menu Bilgileri--------\n");
	int i,j;
	for (i=0;i<p;i++)
	{
		printf("Menu %d\n",i+1);
		for (j=0;j<q;j++)
		{
			printf("Yemek ID:%d\tYemek Adi:%s\tYemek Fiyat:%f\tYemek Kalorisi:%f\n",b[i].liste[j].y_id,b[i].liste[j].yemek_adi,b[i].liste[j].fiyat,b[i].liste[j].kalori);

		}
	}
}

