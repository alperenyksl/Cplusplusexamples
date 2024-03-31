#include <iostream>
#include <string>

using namespace std;
int main() {
    string letters = "abcdefghijklmnopqrstuwxyz";
    int n = letters.length();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            cout << " ";
        }
        for (int j = 0; j <= i; ++j) {
            cout << letters[j];
        }
        for (int j = i - 1; j >= 0; --j) {
            cout << letters[j];
        }
        cout << endl;
    }

    return 0;
}

