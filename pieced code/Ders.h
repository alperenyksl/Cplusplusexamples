#ifndef DERS_H
#define DERS_H

#include <string>

class Ders {
private:
    std::string DersinKodu;
    bool DersBasariDurumu;
    float Vize, Final, DersOrtalamasi;

public:
    void Bilgiler(std::string DersKodu, float Vize, float Final);
    bool DersBasarisi(float DersOrt);
    void DersOzeti();
};

#endif // DERS_H

