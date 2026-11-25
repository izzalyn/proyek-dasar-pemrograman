#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah data (n): ";
    cin >> n;

    int data[n];
    int genap = 0, ganjil = 0;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> data[i];

        if (data[i] % 2 == 0) {
            genap++;
        } else {
            ganjil++;
        }
    }

    cout << "Genap = " << genap << endl;
    cout << "Ganjil = " << ganjil << endl;

    return 0;
}