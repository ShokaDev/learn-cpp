// ada aku foto juga, ini paling panjang, ada 2 foto dia

#include <iostream>
#include <string>

using namespace std;

int main () {
    string nama;
    string nim;
    int tahunLahir;
    int umur;
    string asalSekolah;
    string hobi;

    cout << "Nama Lengkap: ";
    getline(cin,nama);

    cout << "NIM: ";
    getline(cin,nim);

    cout << "Tahun Lahir: ";
    cin >> tahunLahir;

    umur = 2026 - tahunLahir; 

    cin.ignore();

    cout << "Asal Sekolah: ";
    getline(cin, asalSekolah);

    cout << "Hobi: ";
    getline(cin, hobi);

    cout << endl;

    cout << "=== BIODATA ===" << endl;
    cout << "Nama          " << nama << endl;
    cout << "NIM           " << nim << endl;
    cout << "Tahun Lahir   " << tahunLahir << endl;
    cout << "Umur          " << umur << endl;
    cout << "Asal Sekolah  " << asalSekolah << endl;
    cout << "Hobi          " << hobi << endl;

    return 0;
}