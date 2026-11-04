#include <iostream>
using namespace std;

int main() {
    int n;
    int jumlah = 0;
    int total = 0;

    cout << "Masukkan nilai n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Batas n harus lebih besar dari 0." << endl;
    } else {
        cout << " --- Hasil Kelipatan 3 atau 5 (1 sampai " << n << ") ---" << endl;
        cout << "Bilangan yang memenuhi: ";
        
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 || i % 5 == 0) {
                cout << i << " ";
                jumlah++;
                total += i;
            }
        }

        cout << endl;
        cout << "Banyaknya bilangan yang memenuhi = " << jumlah << endl;
        cout << "Total nilai = " << total << endl;
    }

    return 0;
}