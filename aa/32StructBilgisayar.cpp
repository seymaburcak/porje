#include <iostream>
#include "32StructBilgisayar.h"
using namespace std;

void BilgYaz(BilgT B)
{
	cout << "=======================================\n";
	cout << "Barkod No     = " << B.Barkod << endl;
	cout << "Markasi       = " << B.Marka << endl;
	cout << "Islemci Turu  = " << B.Islemci<< endl;
	cout << "HD Kapasitesi = " << B.HDK << endl;
	cout << "RAM Kapasitesi= " << B.RAMK << endl;
	cout << "Satis Fiyati  = " << B.SatisFiyati << endl;
	cout << "=======================================\n";
}


BilgT BilgOku()
{
	BilgT B;
	cout << "Bilgisayarin barkod numarasini giriniz=";
	cin >>B.Barkod;
	cout << "Bilgisayarin markasini giriniz=";
	cin >>B.Marka;
	cout << "Bilgisayarin Islemci turunu giriniz=";
	cin >>B.Islemci;
	cout << "Bilgisayarin HD kapasitesini giriniz=";
	cin >>B.HDK;
	cout << "Bilgisayarin RAM kapasitesini giriniz=";
	cin >>B.RAMK;
	cout << "Bilgisayarin fiyatini giriniz=";
	cin >>B.GelisFiyat;
	B.SatisFiyati = B.GelisFiyat*1.18+500;
	return B;
}

void BilgOku1(BilgT &B)
{
	cout << "Bilgisayarin barkod numarasini giriniz=";
	cin >>B.Barkod;
	cout << "Bilgisayarin markasini giriniz=";
	cin >>B.Marka;
	cout << "Bilgisayarin Islemci turunu giriniz=";
	cin >>B.Islemci;
	cout << "Bilgisayarin HD kapasitesini giriniz=";
	cin >>B.HDK;
	cout << "Bilgisayarin RAM kapasitesini giriniz=";
	cin >>B.RAMK;
	cout << "Bilgisayarin fiyatini giriniz=";
	cin >>B.GelisFiyat;
	B.SatisFiyati = B.GelisFiyat*1.18+500;
}


void main ()
{
	BilgT B1,B2,B3;

	B1 = BilgOku();
	BilgOku1(B2);
	BilgYaz(B1);
	BilgYaz(B2);

	system("pause");
}