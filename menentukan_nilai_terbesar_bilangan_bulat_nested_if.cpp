#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Masukkan tiga bilangan bulat: ";
    cin >> a >> b >> c;

    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    cout << "Nilai terbesar adalah: " << max << endl;
    return 0;
}