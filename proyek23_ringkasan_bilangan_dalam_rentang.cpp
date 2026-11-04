#include <iostream>
using namespace std;

int main() {
    int awal, akhir;
    int genap = 0;
    int ganjil = 0;
    int total = 0;

    cout << "Masukkan batas awal : ";
    cin >> awal;
    cout << "Masukkan batas akhir: ";
    cin >> akhir;

    
    if (awal > akhir) {
        cout << " [Catatan]: Batas awal (" << awal << ") lebih besar dari batas akhir (" << akhir << ")." << endl;
        cout << "Posisi batas otomatis ditukar agar rentang valid." << endl;
        
        int temp = awal;
        awal = akhir;
        akhir = temp;
    }

    cout << " --- Ringkasan Bilangan Rentang (" << awal << " sampai " << akhir << ") ---" << endl;
    cout << "Deret bilangan: ";
    for (int i = awal; i <= akhir; i++) {
        cout << i << " ";
        total += i;

        if (i % 2 == 0) {
            genap++;
        } else {
            ganjil++;
        }
    }

    cout << endl;
    cout << "Banyaknya bilangan genap  = " << genap << endl;
    cout << "Banyaknya bilangan ganjil = " << ganjil << endl;
    cout << "Total seluruh bilangan    = " << total << endl;

    return 0;
}