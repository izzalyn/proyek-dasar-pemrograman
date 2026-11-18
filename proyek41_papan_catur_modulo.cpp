#include <iostream>

using namespace std;

int main() {
    for (int baris = 1; baris <= 6; baris++) {
        for (int kolom = 1; kolom <= 6; kolom++) {
            if ((baris + kolom) % 2 == 0) {
                cout << "X ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    
    return 0;
}