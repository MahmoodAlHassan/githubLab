#include <iostream>
#include <iostream>
using namespace std;

int main() {
// Frågar användaren om hens namn, och sedan skriver ut “Hej <användarens namn>.”
    string nam;
    cout << "Vad heter du? " << endl;
    getline(cin, nam);
    cout << "Hej " << nam << "." << endl;
    return 0;
}
