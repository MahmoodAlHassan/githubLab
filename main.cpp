#include <iostream>
#include <iostream>
using namespace std;

int main() {
// Frågar användaren om hens namn, och sedan skriver ut “Hej <användarens namn>.”
    string namfff;
    cout << "Vad heter du? " << endl;
    getline(cin, namfff);
    cout << "Hej " << namfff << "." << endl;
    return 0;
}
