#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen (n): ";
    cin >> n;

    int angka[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> angka[i];
        total += angka[i];
    }

    cout << "Total = " << total << endl;

    return 0;
}