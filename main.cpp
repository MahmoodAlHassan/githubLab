#include <iostream>
#include <iostream>
using namespace std;

int main() {
// Frågar användaren om hens namn, och sedan skriver ut “Hej <användarens namn>.”
    string namn;
    cout << "Vad heter du? " << endl;
    getline(cin, namn);
    cout << "Hej " << namn << "." << endl;
    return 0;
}
