/******************************************************************************

  Nama     : Amira Syafika Pohan
  Kelompok : Randall
  
            PROGRAM KONVERSI BERBAGAI SATUAN JARAK KE METER (M)

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
    double jarak;
    string satuan;

    cout << "Program Konversi Satuan Jarak ke Meter" << endl;
    cout << "Masukkan jarak: ";
    cin >> jarak;
    cout << "Masukkan satuan (km, hm, dam, dm, cm, mm): ";
    cin >> satuan;

    if (satuan == "km") {
        jarak *= 1000; // 1 kilometer = 1000 meter
    } else if (satuan == "hm") {
        jarak *= 100; // 1 hektometer = 100 meter
    } else if (satuan == "dam") {
        jarak *= 10; // 1 dekameter = 10 meter
    } else if (satuan == "dm") {
        jarak /= 10; // 1 decimeter = 0.1 meter
    } else if (satuan == "cm") {
        jarak /= 100; // 1 sentimeter = 0.01 meter
    } else if (satuan == "mm") {
        jarak /= 1000; // 1 milimeter = 0.001 meter
    } else if (satuan != "m") {
        cout << "Satuan tidak valid." << endl;
        return 1;
    }

    cout << "Hasil konversi: " << jarak << " meter" << endl;

    return 0;
}
