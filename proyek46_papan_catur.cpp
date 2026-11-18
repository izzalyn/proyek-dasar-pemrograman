#include <iostream>

using namespace std;

int main() {
    for (int baris = 1; baris <= 8; baris++) {
        for (int kolom = 1; kolom <= 8; kolom++) {
            if ((baris + kolom) % 2 == 0) {
                cout << "X ";
            } else {
                cout << "O ";
            }
        }
        cout << endl;
    }
    return 0;
}