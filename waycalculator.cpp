#include <iostream>
#include <string>
using namespace std;

void hesapla(const string&, int&, int&, int&);

int main()
{
    int x = 0;
	int y = 0;
	int time = 0;
    string sen; //sen=sentence
    cout << "Robot icin komut dizgisini giriniz: ";
    getline(cin, sen);
    hesapla(sen, x, y, time);
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Bekleme sayisi: "<< time << endl;
    cout<<"Son konum x: "<< x << endl;
    cout<<"Son konum y: "<< y << endl;
    cout<<"Son konum  : "<<"("<<x<<","<<y<<")"<<endl;
    return 0;
}
void hesapla(const string& sen, int &x, int &y, int& time)
{
    for(char c : sen )
	{
        if(c == 'x' || c == 'X')
            x++;
        else if(c == 'y' || c == 'Y')
            y++;
        else if(c == ' ')
            time++;
    }
}
