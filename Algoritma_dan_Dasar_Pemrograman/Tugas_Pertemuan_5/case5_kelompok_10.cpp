// Case 5 - Sistem Seleksi Beasiswa

// Input: IPK, penghasilan orang tua, jumlah tanggungan, dan prestasi.
// Syarat utama: IPK >= 3,50 dan penghasilan orang tua <= Rp5.000.000.
// Beasiswa Prestasi Unggul: IPK >= 3,75 dan memiliki prestasi.
// Beasiswa Reguler: IPK >= 3,50, penghasilan <= Rp5.000.000, tanggungan >= 3.
// Selain kondisi tersebut: tidak dapat beasiswa
// Prestasi: 1 = Tidak ada, 2 = Fakultas, 3 = Universitas, 4 = Nasional.
// Fokus: if, if-else, nested-if, dan switch-case.

#include <iostream>
#include <string>

using namespace std;

int main()
{

    // Deklarasi Variabel
    double IPK;                 // Pake double biar bisa di isi pake koma / titik
    double penghasilanOrangTua; // Pake double biar bisa di isi pake koma / titik
    int tanggungan;
    int prestasi;

    // Nampilin judul program
    cout << endl;
    cout << "==================================" << endl;
    cout << "    Sistem Seleksi Mahasiswa" << endl;
    cout << "==================================" << endl;
    cout << endl;

    // Input dan Validasi IPK (harus di rentang 0.00 - 4.00)
    do
    {
        cout << "Masukkan IPK : " << flush;
        cin >> IPK;

        if (IPK < 0.00 || IPK > 4.00)
        {
            cout << "IPK tidak valid" << endl
                 << endl;
        }

    } while (IPK < 0.00 || IPK > 4.00);

    // Input dan Validasi Penghasilan Orang tua
    do
    {
        cout << "Masukkan Penghasilan Orang Tua : " << flush;
        cin >> penghasilanOrangTua;

        if (penghasilanOrangTua < 0)
        {
            cout << "Penghasilan tidak boleh negatif" << endl
                 << endl;
        }

    } while (penghasilanOrangTua < 0);

    // Input dan Validasi Jumlah Tanggungan
    do
    {
        cout << "Masukkan Jumlah Tanggungan : " << flush;
        cin >> tanggungan;

        if (tanggungan < 0)
        {
            cout << "Jumlah tanggungan tidak boleh negatif.";
        }

    } while (tanggungan < 0);

    // Input dan Validasi Prestasi
    do
    {
        cout << "Prestasi : " << endl;
        cout << "1. Tidak ada" << endl;
        cout << "2. Fakultas " << endl;
        cout << "3. Universitas " << endl;
        cout << "4. Nasional" << endl;
        cout << "Masukkan pilihan prestasi : " << flush;
        cin >> prestasi;

        if (prestasi < 1 || prestasi > 4)
        {
            cout << "Jawaban tidak valid";
        }

    } while (prestasi < 1 || prestasi > 4);

    // Memeriksa apakah penghasilan memenuhi persyaratan beasiswa
    bool cekPenghasilan;

    if (penghasilanOrangTua <= 5000000)
    {
        cekPenghasilan = true;
    }
    else
    {
        cekPenghasilan = false;
    }

    // Memeriksa apakah jumlah tanggungan memenuhi persyaratan beasiswa
    bool cekTanggungan;

    if (tanggungan >= 3)
    {
        cekTanggungan = true;
    }
    else
    {
        cekTanggungan = false;
    }

    // Menentukan apakah mahasiswa memiliki prestasi menggunakan switch-case
    bool cekPrestasi;

    switch (prestasi)
    {
    case 1:
        cekPrestasi = false;
        break;

    default:
        cekPrestasi = true;
        break;
    }

    // Deklarasi hasil seleksi mahasiswa
    string gadapatBeasiswa = "Tidak dapat beasiswa";
    string beasiswaReguler = "Beasiswa Reguler";
    string beasiswaUnggul = "Beasiswa Prestasi unggul";
    string hasilBeasiswa;

    // Seleksi IPK berdasarkan persyaratan dan IPK
    if (cekPenghasilan == true)
    {
        if (cekTanggungan == true)
        {
            if (IPK >= 3.75)
            {
                if (cekPrestasi == true)
                {
                    hasilBeasiswa = beasiswaUnggul;
                }
                else
                {
                    hasilBeasiswa = beasiswaReguler;
                }
            }
            else if (IPK >= 3.50)
            {
                hasilBeasiswa = beasiswaReguler;
            }
            else
            {
                hasilBeasiswa = gadapatBeasiswa;
            }
        }
        else
        {
            hasilBeasiswa = gadapatBeasiswa;
        }
    }
    else
    {
        hasilBeasiswa = gadapatBeasiswa;
    }

    // Menampilkan hasil seleksi beasiswa
    cout << endl;
    cout << "================================================" << endl;
    cout << "Status Beasiswa : " << hasilBeasiswa << endl;
    cout << "================================================" << endl;

    return 0;
}