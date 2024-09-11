#include <stdio.h>
#include <stdlib.h>

/* Struct - typedef Kitaplık oluşturma */
typedef struct{
	char kitap_adi[30];
	char kitap_yazari[30];
	double ISBN;
	char yayin_evi[30];
	float fiyat;
}kitap;

typedef struct{
	char raf_turu[30];
	int kitaplik_ID;
	char kitaplik_adi[20];
	kitap liste[20];
}kitaplik;

void giris_fonksiyonu(kitaplik a[],int n,int m);
float toplam_deger(kitaplik b[],int p,int q);
void cikis_fonksiyonu(kitaplik c[],int k,int t);
int main()
{
	kitaplik ev[3];
	giris_fonksiyonu(ev,3,20);
	toplam_deger(ev,3,20);
	cikis_fonksiyonu(ev,3,20);
	return 0;
}

void giris_fonksiyonu(kitaplik a[],int n,int m)
{
	int i,j;
	for (i=0;i<n;i++)
	{
		printf("%d.kitapligin raf turunu girin:",i+1);
		scanf("%s",&a[i].raf_turu);
		printf("%d.kitapligin ID'sini girin:",i+1);
		scanf("%d",&a[i].kitaplik_ID);
		printf("%d.kitapligin adini girin:",i+1);
		scanf("%s",&a[i].kitaplik_adi);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("%d.kitabin adi:",j+1);
			scanf("%s",&a[i].liste[j].kitap_adi);
			printf("%d.kitabin yazari:",j+1);
			scanf("%s",&a[i].liste[j].kitap_yazari);
			printf("%d.kitabin ISBN degeri:",j+1);
			scanf("%lf",&a[i].liste[j].ISBN);
			printf("%d.kitabin yayinevi:",j+1);
			scanf("%s",a[i].liste[j].yayin_evi);
			printf("%d.kitabin fiyati:",j+1);
			scanf("%f",a[i].liste[j].fiyat);
		}
	}
	
}
float toplam_deger(kitaplik b[],int p,int q)
{
	int i,j;
	float toplam=0;
	for (i=0;i<p;p++)
	{
		for (j=0;j<q;j++)
		{
			toplam+=b[i].liste[j].fiyat;
		}
		
	}
	return toplam;
}
void cikis_fonksiyonu(kitaplik c[],int k,int t)
{
	int i;
	printf("Kitaplik bilgileri---------\n");
	for (i=0;i<k;i++)
	{
		printf("%d.kitapligin raf turu:%s",i+1,c[i].raf_turu);
		printf("%d.kitapligin IDsi:%d",i+1,c[i].kitaplik_ID);
		printf("%d.kitapligin adi:%s",i+1,c[i].kitaplik_adi);
	}
	printf("Toplam deger:%f",toplam_deger(c,k,t));
}
