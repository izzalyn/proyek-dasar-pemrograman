#include <iostream>
using namespace std;

int main() {
    int umur[5];

    for (int i = 0; i < 5; i++) {
        cin >> umur[i];
    }

    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            cout << "Indeks " << i << ": " << umur[i] << endl;
        }
    }

    return 0;
}