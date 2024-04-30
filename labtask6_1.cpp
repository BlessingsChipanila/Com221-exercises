#include <iostream>
#include <string>

using namespace std;

int main() {
    int* a = new int;
    cout << "Enter value for number: ";
    cin >> *a;

    string* b = new string;
    cout << "Enter word: ";
    cin.ignore();
    getline(cin, *b);

    cout << "Dynamically allocated integer: " << *a << endl;
    cout << "Dynamically allocated string: " << *b << endl;

    delete a;
    delete b;

    return 0;
}
