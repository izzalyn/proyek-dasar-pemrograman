#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah nilai (n): ";
    cin >> n;

    int nilai[n];
    int lulus = 0;

    for (int i = 0; i < n; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];

        if (nilai[i] >= 70) {
            lulus++;
        }
    }

    cout << "Jumlah lulus = " << lulus << endl;

    return 0;
}