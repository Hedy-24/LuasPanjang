#include <iostream>
using namespace std;

int main() {
    int p, l, hasil;

    cout << "Nama   : Hedy" << endl;
    cout << "NIM    : 25.11.6522" << endl;
    cout << "Kelas  : IF05" << endl;
    cout << "==================================" << endl;

    cout << "Program Menghitung Persegi Panjang" << endl;

    cout << "Masukan Panjang Sisi : ";
    cin >> p;

    cout << "Masukan Lebar Sisi   : ";
    cin >> l;

    hasil = p * l;

    cout << "Luas persegi panjang tersebut adalah " << hasil << endl;

    return 0;
}