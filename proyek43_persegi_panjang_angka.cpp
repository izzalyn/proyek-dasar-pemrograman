#include <iostream>

using namespace std;

int main() {
    for (int baris = 1; baris <= 4; baris++) {
        for (int kolom = 1; kolom <= 6; kolom++) {
            cout << kolom << " ";
        }
        cout << endl;
    }
    return 0;
}