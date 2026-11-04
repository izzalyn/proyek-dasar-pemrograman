#include <iostream>
using namespace std;

int main() {
    int n;
    int total = 0;

    cout << "Masukkan nilai n: ";
    cin >> n;


    if (n < 1) {
        cout << "Input tidak valid. Nilai n harus minimal 1." << endl;
    } else {
        cout << "Bilangan ganjil: ";
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                cout << i << " ";
                total += i;
            }
        }
        cout << endl;
        cout << "Jumlah total = " << total << endl;
    }

    return 0;
}