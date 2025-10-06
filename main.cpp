#include <iostream>
#include <iostream>
using namespace std;

int main() {
// Frågar användaren om hens namn, och sedan skriver ut “Hej <användarens namn>.”
    string name;
    cout << "Vad heter du? " << endl;
    getline(cin, name);
    cout << "Hej " << name << "." << endl;
    return 0;
}
