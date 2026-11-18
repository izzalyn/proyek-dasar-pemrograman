#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "Masukkan batas tabel perkalian (n): ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Batas n harus lebih besar dari 0!" << endl;
        return 0;
    }
    
    cout << " Tabel Perkalian " << n << " x " << n << ":" << endl;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    
    return 0;
}