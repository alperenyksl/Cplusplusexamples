#ifndef OGRENCI_H
#define OGRENCI_H

#include <string>
#include "ders.h"

using namespace std;
class Ogrenci {
private:
    int OkulNumarasi;
    string OgrencininAdi;
    string OgrencininSoyadi;

public:
    Ders KayitliOlduguDersler[3];

    Ogrenci(string Adi = "", string Soyadi = "", int OkulNo = 0);
    
   int getOkulNumarasi() const 
	{
        return OkulNumarasi;
    }
    void setOkulNumarasi(int numara) 
	{
        OkulNumarasi = numara;
    }
    string getOgrencininAdi() const 
	{
        return OgrencininAdi;
    }
    void setOgrencininAdi(string ad) 
	{
        OgrencininAdi = ad;
    }
    string getOgrencininSoyadi() const 
	{
        return OgrencininSoyadi;
    }
    void setOgrencininSoyadi(string soyad) 
	{
        OgrencininSoyadi = soyad;
    }
};

#endif // OGRENCI_H

