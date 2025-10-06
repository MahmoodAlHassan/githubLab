#include <iostream>
#include <iostream>
using namespace std;

int main() {
// Frågar användaren om hens namn, och sedan skriver ut “Hej <användarens namn>.”
    string namej;
    cout << "Vad heter du? " << endl;
    getline(cin, namej);
    cout << "Hej " << namej << "." << endl;
    return 0;
}
