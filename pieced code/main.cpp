#include <iostream>
#include "ogrenci.h"
#include "ders.h"

using namespace std;
int main() 
{
    Ogrenci ogrenciler[2];
    string ad;
	string soyad;
    int okulNo = 0;
    for (int i = 0; i < 2; ++i) 
	{
        cout << i + 1 << ". Ogrencinin okul numarasini, adini ve soyadini giriniz: ";
        cin >> okulNo;
        cin.ignore();
        getline(cin, ad);
        getline(cin, soyad);
        ogrenciler[i] = Ogrenci(ad, soyad, okulNo);
    }

    for (int i = 0; i < 2; ++i) 
	{
        cout << ogrenciler[i].getOgrencininAdi() << " " << ogrenciler[i].getOgrencininSoyadi() << " 'a ait ders bilgilerini giriniz." << endl;
        for (int j = 0; j < 3; ++j) 
		{
            string dersKodu;
            float vize, final;
            cout << j + 1 << ". Ders Kodu, Vize, Final giriniz: ";
            cin >> dersKodu >> vize >> final;
            ogrenciler[i].KayitliOlduguDersler[j].Bilgiler(dersKodu, vize, final);
        }
    }

    for (int i = 0; i < 2; ++i) 
	{
        ogrenciler[i].KimlikBilgileri();
        for (int j = 0; j < 3; ++j) {
            ogrenciler[i].KayitliOlduguDersler[j].DersOzeti();
        }
    }

    return 0;
}
