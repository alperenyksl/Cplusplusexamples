#include <iostream>
#include <vector>

using namespace std;

template <typename T>
vector<T> reverseVector(const vector<T>& v) {
    size_t n = v.size();
    vector<T> reversedVector;
    for (size_t i = n; i > 0; --i) {
        reversedVector.push_back(v[i - 1]);
    }
    return reversedVector;
}

int main() {
    vector<int> mine = {1, 2, 3, 4, 5};
    cout << "Orijinal Vektör: ";
    for (size_t i = 0; i < mine.size(); ++i) {
        cout << mine[i] << " ";
    }
    cout << endl;

    vector<int> reversedVector = reverseVector(mine);

    cout << "Tersine Çevrilen Vektör: ";
    for (size_t i = 0; i < reversedVector.size(); ++i) {
        cout << reversedVector[i] << " ";
    }
    cout << endl;

    return 0;
}

