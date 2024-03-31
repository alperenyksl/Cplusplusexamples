#include <iostream>
#include <vector>

using namespace std;
// T pop_front kullanmamiz gerekli olmasi demek, template olusturmamiz anlamina gelir.
template <typename T>
T pop_front(vector<T>& v) 
{
    // Vektor bos mu dolu mu?
    if (v.empty()) {
        cout << "Hata: Vektor bos, pop_front islemi yapilamaz." << endl;
        T default_value{};
        return default_value;
    }
    T removedElement = v.front();
    for (size_t i = 0; i < v.size() - 1; ++i) 
	{
        v[i] = v[i + 1];
    }
    v.pop_back();
    return removedElement;
}

int main() 
{
    vector<int> mine = {1, 2, 3, 4, 5};
    int removedValue = pop_front(mine);
    cout << "Silinen Deger: " << removedValue << endl;
    cout << "Güncellenmis Vektor: ";
    for (size_t i = 0; i < mine.size(); ++i) 
	{
        cout << mine[i] << " ";
    }
    cout << endl;

    return 0;
}

