// Buat program input untuk menghitung harga total semua barang

#include <iostream> 

using namespace std;

int main() {
    int jumlah;
    double harga; // Disini make tipe data double karena double nilai nya bisa ber koma
    double total; 

    cout << "Jumlah barang: "; // Meminta jumlah barang
    cin >> jumlah; // Menerima jumlah barang

    cout << "Harga per Unit: "; // Meminta harga per unit 
    cin >> harga; // Menerima harga per unit

    total = jumlah * harga; // Hitung nilai variable total

    cout << "Total harga = Rp" << total << endl; // Menampilan total harga

    return 0;
}