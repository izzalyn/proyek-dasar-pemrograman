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

    int terbesar = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] > terbesar) {
            terbesar = nilai[i];
        }
    }

    cout << "Terbesar = " << terbesar << endl;

    return 0;
}