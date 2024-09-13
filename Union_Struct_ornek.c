#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Bilgisayardaki bir ogrenci ile yazýlýmdaki bir öðrencinin yerlerini degiþtirme */
typedef union{
	int tempts;
	float tempf;
	char tempc[30];
	double tempd;
	
}gecici;

typedef struct{
	int ogr_no;
	char ogr_adi[30];
	char bolum_adi[30];
	float gano;
}ogrenci;

void intdegistir(ogrenci *a,ogrenci *b,gecici *c);
void chardegistir(ogrenci *a,ogrenci *b,gecici *c);
void floatdegistir(ogrenci *a,ogrenci *b,gecici *c);
int main()
{
	gecici temp;
	ogrenci ogr1;
	ogrenci ogr2;
	strcpy(ogr1.bolum_adi,"Yazilim");//char dizileri (string) karakter dizileri olduðundan
	//char deðiþkenlerinin doðrudan deðiþtirilmesi bu durumda doðru deðildir.
	//Bunun yerine, char dizilerini kopyalamak için strcpy fonksiyonunu kullanýlabilir.
	strcpy(ogr1.ogr_adi,"Ahmet");
	ogr1.ogr_no=190;
	ogr1.gano=3.17;
	strcpy(ogr2.bolum_adi,"Bilgisayar");
	strcpy(ogr2.ogr_adi,"Mehmet");
	ogr2.ogr_no=265;
	ogr2.gano=3.36;
	int boyut=sizeof(temp);
	intdegistir(&ogr1,&ogr2,&temp);
	chardegistir(&ogr1,&ogr2,&temp);
	floatdegistir(&ogr1,&ogr2,&temp);
	printf("Ogr1 adi:%s\tOgr2 adi:%s\n",ogr1.ogr_adi,ogr2.ogr_adi);
	printf("Ogr1 bolum:%s\tOgr2 bolum:%s\n",ogr1.bolum_adi,ogr2.bolum_adi);
	printf("Ogr1 no:%d\tOgr2 no:%d\n",ogr1.ogr_no,ogr2.ogr_no);
	printf("Ogr1 GANO:%f\tOgr2 GANO:%f",ogr1.gano,ogr2.gano);
	
	return 0;
}

void intdegistir(ogrenci *a,ogrenci *b,gecici *c)
{
	c->tempts=a->ogr_no;
	a->ogr_no=b->ogr_no;
	b->ogr_no=c->tempts;
}

void chardegistir(ogrenci *a,ogrenci *b,gecici *c)
{
	
 	strcpy(c->tempc, a->bolum_adi); //burada da char dizisiyle uðraþtýðýmýz için strcopy fonksiyonunu kullandýk.
    strcpy(a->bolum_adi, b->bolum_adi);
    strcpy(b->bolum_adi, c->tempc);
}

void floatdegistir(ogrenci *a,ogrenci *b,gecici *c)
{
	c->tempf=a->gano;
	a->gano=b->gano;
	b->gano=c->tempf;
}

