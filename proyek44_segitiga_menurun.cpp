#include <iostream>

using namespace std;

int main() {
    for (int baris = 1; baris <= 5; baris++) {
        for (int kolom = 1; kolom <= (6 - baris); kolom++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}