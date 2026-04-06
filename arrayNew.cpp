#include <iostream>
using namespace std;

int main(){
    // deklarasi dengan inisialisasi
    int aku[5] = {10, 20, 30, 40, 50};
    // deklarasi tanpa inisialisasi
    int kamu[5];
    // tampilkan data (membaca data array)
    cout << "Data pada index 1 = " << aku[1] << endl;
    // ganti index ke 1(menulis data array)
    aku[1] = 200;
    cout << endl;
    cout << "Data pada index 1 = " << aku[1] << endl;
    // mengisi satu per satu
    cout << "DAta index 0 = ";
    cin >> kamu[0];
    cout << "Data index 1 = ";
    cin >> kamu[1];
    cout << "data ondex 2 = ";
    cin >> kamu[2];
    cout << "DAta index 3 = ";
    cin >> kamu[3];
    cout << "Data index 4 = ";
    cin >> kamu [4];
    cout << endl;
}