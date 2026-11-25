#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Masukkan tiga bilangan bulat (a b c): ";
    cin >> a >> b >> c;

    int terbesar;
    if (a >= b) {
        if (a >= c) {
            terbesar = a;
        } else {
            terbesar = c;
        }
    } else {
        if (b >= c) {
            terbesar = b;
        } else {
            terbesar = c;
        }
    }

    cout << "Nilai terbesar adalah: " << terbesar << endl;
    return 0;
}