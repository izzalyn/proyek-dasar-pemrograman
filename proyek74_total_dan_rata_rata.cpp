#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 5;
    int nilai[N], total = 0;
    double rataRata;

    for (int i = 0; i < N; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
        total += nilai[i];
    }

    rataRata = static_cast<double>(total) / N;
    cout << "Total: " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Rata-rata: " << rataRata << endl;

    return 0;
}