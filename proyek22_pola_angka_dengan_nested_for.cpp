#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan tinggi pola (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Tinggi n harus lebih besar dari 0." << endl;
    } else {
        cout << "\n--- Output Pola Segitiga ---" << endl;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    return 0;
}