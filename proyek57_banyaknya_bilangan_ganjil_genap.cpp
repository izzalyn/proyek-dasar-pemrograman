#include <iostream>
using namespace std;

int main() {
    int angka[10];
    int genap = 0, ganjil = 0;

    for (int i = 0; i < 10; i++) {
        cin >> angka[i];
        if (angka[i] % 2 == 0) {
            genap++;
        } else {
            ganjil++;
        }
    }

    cout << "Genap: " << genap << endl;
    cout << "Ganjil: " << ganjil << endl;

    return 0;
}