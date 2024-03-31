#include <iostream>
#include <string>
using namespace std;

class Ders 
{
private:
    string DersinKodu;
    bool DersBasariDurumu;
    float Vize;
	float Final;
	float DersOrtalamasi;
public:
    void Bilgiler(string DersKodu,float Vize,float Final) 
	{
        this->DersinKodu = DersKodu;
        this->Vize = Vize;
        this->Final = Final;
        this->DersOrtalamasi = (Vize*0.40)+(Final*0.60);
        this->DersBasariDurumu = DersBasarisi(DersOrtalamasi);
    }
//this kelimesini, sinifin uye fonksiyonlari icinde, o sinifa ait nesneyi temsil etmek icin kullaniyoruz.
//https://www.geeksforgeeks.org/this-pointer-in-c/
    bool DersBasarisi(float DersOrt)
	{
        return (DersOrt >= 60.0);
    }
    void DersOzeti() 
	{
        cout << "Dersin Adi: " << DersinKodu << endl;
        cout << "Vize Notu: " << Vize << endl;
        cout << "Final Notu: " << Final << endl;
        cout << "Ortalamasi: " << DersOrtalamasi << endl;
        cout << "Basari Durumu: " << DersBasariDurumu << endl;
    }
};

class Ogrenci 
{
private:
    int OkulNumarasi;
    string OgrencininAdi;
    string OgrencininSoyadi;

public:
    Ders KayitliOlduguDersler[3];
    Ogrenci(string Adi = "", string Soyadi = "", int OkulNo = 0) 
	{
        this->OgrencininAdi = Adi;
        this->OgrencininSoyadi = Soyadi;
        this->OkulNumarasi = OkulNo;
    }

    void KimlikBilgileri() const 
	{
        cout << "Ad:" << OgrencininAdi << endl;
        cout << "Soyad:" << OgrencininSoyadi << endl;
        cout << "Okul No:" << OkulNumarasi << endl;
    }

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


