#include <iostream>
#include <iostream>
using namespace std;

int main() {
// Frågar användaren om hens namn, och sedan skriver ut “Hej <användarens namn>.”
    string namff;
    cout << "Vad heter du? " << endl;
    getline(cin, namff);
    cout << "Hej " << namff << "." << endl;
    return 0;
}
