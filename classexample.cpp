#include <iostream>
using namespace std;

class Sekil {
private:
    int genislik;
    int yukseklik;

public:
    Sekil(int x, int y) : genislik(x), yukseklik(y) 
	{
        Ciz();
    }
    void GenislikDuzelt(int yeniGenislik) 
	{
        genislik = yeniGenislik;
        Ciz();
    }
    void SekilSoyle() const 
	{
        cout << "Seklin genisligi: " << genislik << ", yuksekligi: " << yukseklik << endl;
    }
    void Alan() const 
	{
        cout << "Seklin alani: " << genislik * yukseklik << endl;
    }
    void Ciz() const 
	{
        if (genislik == yukseklik) 
		{
            cout << "Kare: " << endl;
        } else 
		{
            cout << "Dikdortgen: " << endl;
        }

        for (int i = 0; i < yukseklik; ++i) 
		{
            for (int j = 0; j < genislik; ++j) 
			{
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() 
{
    int x, y, gen;
    char secim;
    cout << "Genislik ve Yukseklik Giriniz:";
    cin >> x >> y;
    Sekil obje(x, y);

    do {
        cout << "(G) - Genislik ve Yukseklik Giriniz : ";
        cout << "(C) - Cikis ";
        cout << "\n Seciminiz?";
        cin >> secim;

        switch (secim) 
		{
            case 'G':
                cout << "\n Yeni genisligi giriniz:";
                cin >> gen;
                obje.GenislikDuzelt(gen);
                obje.SekilSoyle();
                obje.Alan();
                break;
        }

    } while (secim != 'C');

    cout << "Bye...";
    return 0;
}

