#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah nilai (n): ";
    cin >> n;

    int nilai[n];
    for (int i = 0; i < n; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    int terkecil = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] < terkecil) {
            terkecil = nilai[i];
        }
    }

    cout << "Terkecil = " << terkecil << endl;

    return 0;
}