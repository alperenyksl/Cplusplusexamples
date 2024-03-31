#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void reverseVector(vector<T>& v) 
{
    size_t n = v.size();
    
    for (size_t i = 0, j = n - 1; i < j; ++i, --j) 
	{
        swap(v[i], v[j]);
    }
}

int main() {
    vector<int> mine = {1, 2, 3, 4, 5};
    cout << "Orijinal Vektor: ";
    for (size_t i = 0; i < mine.size(); ++i) 
	{
        cout << mine[i] << " ";
    }
    cout << endl;

    reverseVector(mine);

    cout << "Tersine Çevrilen Vektor: ";
    for (size_t i = 0; i < mine.size(); ++i) 
	{
        cout << mine[i] << " ";
    }
    cout << endl;

    return 0;
}

