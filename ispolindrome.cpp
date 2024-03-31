#include <iostream>
#include <string>

using namespace std;
bool isPalindrome(const string& str) {
    size_t size = str.size();
    for (size_t i = 0; i < size / 2; ++i) {
        if (str[i] != str[size - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string userWord;

    cout << "Enter a word: ";
    cin >> userWord;
    cout << "Is " << userWord << " a palindrome? " <<boolalpha << isPalindrome(userWord) <<endl;
    return 0;
}

//boolalpha kullanildiginda, boolean degerler "true" veya "false" olarak metinsel olarak görüntülenir.
