#include <iostream>
#include <climits>
using namespace std;

int main() {
    int data[5];
    for (int i = 0; i < 5; i++) {
        cin >> data[i];
    }

    int maks1 = INT_MIN;
    int maks2 = INT_MIN;
    bool adaKedua = false;

    for (int i = 0; i < 5; i++) {
        if (data[i] > maks1) {
            if (maks1 != INT_MIN) {
                maks2 = maks1;
                adaKedua = true;
            }
            maks1 = data[i];
        } else if (data[i] < maks1 && data[i] > maks2) {
            maks2 = data[i];
            adaKedua = true;
        }
    }

    if (!adaKedua) {
        cout << "Semua elemen sama, tidak ada nilai tertinggi kedua" << endl;
    } else {
        cout << "Nilai tertinggi kedua: " << maks2 << endl;
    }

    return 0;
}