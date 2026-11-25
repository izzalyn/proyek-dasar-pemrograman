#include <iostream>
using namespace std;

int main() {
    const int N = 7;
    int nilai[N];

    for (int i = 0; i < N; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    cout << " Data yang dimasukkan: ";
    for (int i = 0; i < N; i++) {
        cout << "Indeks " << i << " = " << nilai[i] << endl;
    }

    return 0;
}