#include <iostream>

using namespace std;

int main() {
    int pilihan;
    double a, b, hasil;

    do {
        cout << "\n=== KALKULATOR MENU ===" << endl;
        cout << "1. Penjumlahan (+)" << endl;
        cout << "2. Pengurangan (-)" << endl;
        cout << "3. Perkalian (*)" << endl;
        cout << "4. Pembagian (/)" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan menu: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 4) {
            cout << "Masukkan angka pertama : ";
            cin >> a;
            cout << "Masukkan angka kedua   : ";
            cin >> b;

            switch (pilihan) {
                case 1:
                    hasil = a + b;
                    cout << "Hasil Penjumlahan: " << a << " + " << b << " = " << hasil << endl;
                    break;
                case 2:
                    hasil = a - b;
                    cout << "Hasil Pengurangan: " << a << " - " << b << " = " << hasil << endl;
                    break;
                case 3:
                    hasil = a * b;
                    cout << "Hasil Perkalian: " << a << " * " << b << " = " << hasil << endl;
                    break;
                case 4:
                    if (b != 0) {
                        hasil = a / b;
                        cout << "Hasil Pembagian: " << a << " / " << b << " = " << hasil << endl;
                    } else {
                        cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
                    }
                    break;
            }
        } else if (pilihan != 0) {
            cout << "Pilihan menu tidak valid. Silakan coba lagi." << endl;
        }

    } while (pilihan != 0);

    cout << "Terima kasih, program selesai." << endl;
    return 0;
}