#include <iostream>
using namespace std;

int main() {
    // Constanta
    const double PI = 3.14159;

    // Variable dengan berbagai tipe data
    int umur = 20;
    float tinggi = 165.5;
    double berat = 55.7;
    char jenisKelamin = 'P';
    bool mahasiswa = true;
    string nama = "Andi";

    // Output ke layar
    cout << "=== Data Diri ===" << endl;
    cout << "Nama            = " << nama << endl;
    cout << "Umur            = " << umur << " Tahun" << endl;
    cout << "Tinggi Badan    = " << tinggi << " CM" << endl;
    cout << "Berat Badan     = " << berat << " KG" << endl;
    cout << "Jenis Kelamin   = " << jenisKelamin << endl;
    cout << "Mahasiswa       = " << (mahasiswa ? "Ya" : "Tidak") << endl;

    // Menggunakan konstanta
    double jariJari = 7.0;
    double luasLingkaran = PI * jariJari * jariJari;
    cout << "Luas lingkaran dengan jari jari " << jariJari << " = " << luasLingkaran << endl;

    return 0;
}