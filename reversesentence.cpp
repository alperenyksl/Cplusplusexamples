#include <iostream>
#include <string>

using namespace std;

void reverseString(const string& str, size_t index) {
    if (index < str.length()) {
        reverseString(str, index + 1);
        cout << str[index];
    }
}
int main() {
    cout << "Bir metin girin: ";
    string user_input;
    getline(cin, user_input);
    cout << "Ters çevrilen metin: ";
    reverseString(user_input, 0);
    return 0;
}

