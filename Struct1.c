#include <stdio.h>
#include <stdlib.h>

/* Struct 1 */
//struct yapýsý fonksiyon tanýmlamasý þeklinde main fonksiyonunun üstünde tanýmlanýr.

struct ogrenci
{
	int o_no;
	char isim[20];
	char soyisim[20];
	char bolum[20];	
};

int main() 
{
	struct ogrenci ogr_list[3];
	int i;
	for (i=0;i<3;i++)
	{
		printf("Lutfen %d.ogrencinin ogrenci numarasini girin:",i+1);
		scanf("%d",&ogr_list[i].o_no);
		printf("Lutfen %d.ogrencinin ogrenci adini girin:",i+1);
		scanf("%s",&ogr_list[i].isim);
		printf("Lutfen %d.ogrencinin soyadini girin:",i+1);
		scanf("%s",&ogr_list[i].soyisim);
		printf("Lutfen %d. ogrencinin bolumunu girin:",i+1);
		scanf("%s",&ogr_list[i].bolum);
	}
	printf("Ogrenci listesi\n");
	printf("OGR No\t OGR Adi\t OGR Soyadi\t OGR Bolum\n");
	
	for (i=0;i<3;i++)
	{
		printf("%d\t %s\t %s\t %s\n",ogr_list[i].o_no,ogr_list[i].isim,ogr_list[i].soyisim,ogr_list[i].bolum);
	}
	
	return 0;
}
