#include <iostream>
#include <string>

using namespace std;

int main() {

    // Variable dengan tipe data yang berbeda

    int umur = 18;
    float tinggi = 165.5f;
    double berat = 55.7;
    char jenisKelamin = 'L';
    bool mahasiswa = true;
    string nama = "Farel";

    // Menampilkan nilai variable

    cout << "Nama          : " << nama << endl;
    cout << "Umur          : " << umur << endl;
    cout << "Tinggi        : " << tinggi << " cm" << endl;
    cout << "Berat         : " << berat << " kg" << endl;
    cout << "Jenis Kelamin : " << jenisKelamin << endl;
    cout << "Mahasiswa     : " << mahasiswa << endl;

    return 0;
}