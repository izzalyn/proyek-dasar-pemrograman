#include <iostream>
using namespace std;

int main() {
    int data[6] = {15, 25, 35, 45, 55, 65};
    int cari;
    bool ditemukan = false;

    cin >> cari;

    for (int i = 0; i < 6; i++) {
        if (data[i] == cari) {
            ditemukan = true;
            break;
        }
    }

    if (ditemukan) {
        cout << "Ditemukan" << endl;
    } else {
        cout << "Tidak ditemukan" << endl;
    }

    return 0;
}