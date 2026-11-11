#include <iostream>

using namespace std;

int main() {
    int rating;

    do {
        cout << "Masukkan rating (1-5): ";
        cin >> rating;

        if (rating < 1 || rating > 5) {
            cout << "Rating tidak valid." << endl;
        }
    } while (rating < 1 || rating > 5);

    if (rating >= 4 && rating <= 5) {
        cout << "Kategori: Puas" << endl;
    } else if (rating == 3) {
        cout << "Kategori: Cukup" << endl;
    } else if (rating >= 1 && rating <= 2) {
        cout << "Kategori: Perlu perbaikan" << endl;
    }

    return 0;
}