#include <iostream>
#include <string>
using namespace std;

int main() {
    float num1, num2; 
    long jumlah, pilihan;
    char loop;
while (true) {
        cout<<"======================================";
        cout<<endl;
        cout<<"CALCULATOR C++ by andev"<<endl;
        cout<<endl;
        cout<<"1. Tambah"<<endl;
        cout<<"2. Kurang"<<endl;
        cout<<"3. Kali"<<endl;
        cout<<"4. Bagi"<<endl;
        cout<<endl;
        cout<<"Pilih salah satu 1/2/3/4 = ";cin>>pilihan;
        cout<<endl;
        cout<<endl;

        if (pilihan == 1) {
            cout<<"PENJUMLAHAN"<<endl;
            cout<<"======================================";
            cout<<endl;
            cout<<"Masukkan Angka = ";cin>>num1;
            cout<<"Ditambahkan Dengan = ";cin>>num2;
            cout<<endl;
            jumlah = num1 + num2;
            cout<<"Hasil Operasi Penjumlahan = "<<jumlah;
        }

        else if (pilihan == 2) {
            cout<<"PENGURANGAN"<<endl;
            cout<<"======================================";
            cout<<endl;
            cout<<"Masukkan Angka = ";cin>>num1;
            cout<<"Dikurangi Dengan = ";cin>>num2;
            cout<<endl;
            jumlah = num1 - num2;
            cout<<"Hasil Operasi Pengurangan = "<<jumlah;
        }

        else if (pilihan == 3) {
            cout<<"PERKALIAN"<<endl;
            cout<<"======================================";
            cout<<endl;
            cout<<"Masukkan Angka = ";cin>>num1;
            cout<<"Dikalikan Dengan = ";cin>>num2;
            cout<<endl;
            jumlah = num1 * num2;
            cout<<"Hasil Operasi Perkalian = "<<jumlah;
        }

        else if (pilihan == 4) {
            cout<<"PEMBAGIAN"<<endl;
            cout<<"======================================";
            cout<<endl;
            cout<<"Masukkan Angka = ";cin>>num1;
            cout<<"Dibagi Dengan = ";cin>>num2;
            cout<<endl;
            jumlah = num1 / num2;
            cout<<"Hasil Operasi Pembagian = "<<jumlah;
        }
        else {
            cout<<"Invalid Input!";
            break;
        }
        cout<<endl;
        cout<<"======================================";
        cout<<endl;
        cout<<"TO END THE LOOP, TYPE 'G'!!!!"<<endl;
        //because im too dumb, didnt know how to end loop with if else statement, ehe.
    }
return 0;
}