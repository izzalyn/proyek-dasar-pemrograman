#include <iostream>
using namespace std;

int main() {
    int data[5] = {10, 20, 30, 40, 50};

    cout << "Urutan terbalik: ";
    for (int i = 4; i >= 0; i--) {
        cout << data[i] << " ";
    }
    cout << endl;

    cout << "Urutan asli: ";
    for (int i = 0; i < 5; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}