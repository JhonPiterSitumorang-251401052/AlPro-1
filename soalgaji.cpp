#include <iostream>
using namespace std;

int main() {
    string nama;
    int golongan, tunjanganAnak, anak;
    float gajiTotal;

    cout << "Masukkan nama anda: " << endl;
    cin >> nama;
    cout << "Masukkan golongan (1,2,3): " << endl;
    cin >> golongan;
    cout << "Jumlah anak: " << endl;
    cin >> anak;

    switch (golongan) {
        case 1:
            gajiTotal = 5000000;
            break;
        case 2:
            gajiTotal = 3000000;
            break;
        case 3:
            gajiTotal = 2500000;
            break;
        default:
            cout << "Golongan tidak valid!" << endl;
    }

    gajiTotal = gajiTotal * 0.95;

    if (anak >= 1 && anak <= 2) {
        tunjanganAnak = anak * 500000;
        gajiTotal += tunjanganAnak;
    } else if (anak > 2) {
        tunjanganAnak = 750000;
        gajiTotal += tunjanganAnak;
    }

    cout << "Gaji total: Rp." << gajiTotal << endl;
}