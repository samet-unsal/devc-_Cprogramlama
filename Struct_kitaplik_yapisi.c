#include <stdio.h>
#include <stdlib.h>

/* Kitaplık Yapısı */
struct kitap
{
	char k_adi[20];
	char k_yazar[20];
	float k_fiyati;
	double ISBN;
	char y_evi[20];
};
void kitap_kayit(struct kitap a[],int m);
void kitap_yazdir(struct kitap b[],int n);
int main()
{
	struct kitap kitap_liste[3];
	printf("Kitap bilgileri\n-----------\n");
	kitap_kayit(kitap_liste,3);
	kitap_yazdir(kitap_liste,3);
	
	return 0;
}

void kitap_yazdir(struct kitap b[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("%d.Kitabin Adi:%s\n",i+1,b[i].k_adi);
		printf("%d.Kitabin Yazari:%s\n",i+1,b[i].k_yazar);
		printf("%d.Kitabin Yayinevi:%s\n",i+1,b[i].y_evi);
		printf("%d.Kitabin ISBN Degeri:%lf\n",i+1,b[i].ISBN);
		printf("%d.Kitabin fiyati:%f\n",i+1,b[i].k_fiyati);	
	}
	
}

void kitap_kayit(struct kitap a[],int m)
{
	int i;
	for (i=0;i<m;i++)
	{
		
		printf("Lutfen %d.kitabin adini girin:\n",i+1);
		scanf("%s",&a[i].k_adi);
		printf("Lutfen %d.kitabin yazarini girin:\n",i+1);
		scanf("%s",&a[i].k_yazar);
		printf("Lutfen %d.kitabin fiyatini girin:\n",i+1);
		scanf("%f",&a[i].k_fiyati);
		printf("Lutfen %d.kitabin ISBN degerini girin:\n",i+1);
		scanf("%lf",&a[i].ISBN);
		printf("Lutfen %d.kitabin yayinevini girin:\n",i+1);
		scanf("%s",&a[i].y_evi);
	}
}
