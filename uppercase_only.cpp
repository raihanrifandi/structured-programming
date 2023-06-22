#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isUppercase(const string& s) {
    for (char c : s) {
        if (c != ' ' && (!isalpha(c) || !isupper(c))) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    cin.ignore(); 

    string inputStrings[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, inputStrings[i]);

        if (isUppercase(inputStrings[i])) {
            cout << "Besar" << endl;
        } else {
            cout << "Kecil" << endl;
        }
    }

    return 0;
}
