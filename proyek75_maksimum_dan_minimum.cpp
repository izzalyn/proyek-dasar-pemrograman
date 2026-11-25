#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int nilai[N];

    for (int i = 0; i < N; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    int maksimum = nilai[0];
    int minimum = nilai[0];

    for (int i = 1; i < N; i++) {
        if (nilai[i] > maksimum) maksimum = nilai[i];
        if (nilai[i] < minimum) minimum = nilai[i];
    }

    cout << "Maksimum: " << maksimum << endl;
    cout << "Minimum : " << minimum << endl;

    return 0;
}