#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan batas akhir: ";
    cin >> n;

    if (n < 1) {
        cout << "Input harus >= 1" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}