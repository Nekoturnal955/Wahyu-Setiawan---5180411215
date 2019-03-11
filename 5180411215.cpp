#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

struct mhs {
    char NIM[10];
    char NAMA[100];
    char JK[50];
    char jurusan[50];
    float NILAI;
    float NILAI1;
    float NILAI2;
};

typedef mhs mhsr[50];

int main() {
    int jumlahsiswa, pilihan;
    mhsr x;
    while (pilihan != 4) {
        cout << "               MENU DATA SISWA                      \n";
        cout << "----------------------------------------------------\n";
        cout << "1. Input Data\n";
        cout << "2. Lihat Data\n";
        cout << "3. Tampilkan Rata-Rata\n";
        cout << "4. Keluar\n";
        cout << "----------------------------------------------------\n";
        cin >>pilihan;
        if (pilihan == 1) {
            cout << "Masukan banyak siswa =";
            cin >> jumlahsiswa;
            for (int i = 0; i < jumlahsiswa; i++) {
                cout << "Siswa " << i + 1;
                cout << "\nNIM : ";
                cin >> x[i].NIM;

                cout << "NAMA: ";
                cin >> x[i].NAMA;

                cout << "JENIS KELAMIN L/P: ";
                cin >> x[i].JK;

                cout << "JURUSAN: ";
                cin >> x[i].jurusan;

                cout << "NILAI Harian 1 : ";
                cin >> x[i].NILAI;

                cout << "NILAI Harian 2 : ";
                cin >> x[i].NILAI1;

                cout << "NILAI Harian 3 : ";
                cin >> x[i].NILAI2;
                cout << endl;
            }
        } else if (pilihan == 2) {
            cout << "\n |" << setw(13) << "NIM |";
            cout << setw(32) << "NAMA |" <<setw(20) << "JURUSAN |"<< setw(10) << "JENIS KELAMIN |" << setw(7) << "NILAI 1 |" << "NILAI 2 |" << "NILAI 3 |" << endl;
            cout <<"------------------------------------------------------------\n";
            for (int i = 0; i < jumlahsiswa; i++) {
                cout << " |" << setw(11) << x[i].NIM << " |";
                cout << setw(30) << x[i].NAMA << " |";
                cout << setw(18) << x[i].jurusan << " |";
                cout << setw(13) << x[i].JK << " |";
                cout << setw(7)  << x[i].NILAI << " |";
                cout << setw(7) << x[i].NILAI1 << " |";
                cout << setw(7) <<x[i].NILAI << " |"<<endl;

            }
        }

    }

}
