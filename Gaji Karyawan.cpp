#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main(){

    cout<<"Program Menghitung Gaji Karyawan\n";
    cout<<"---------------------------------------\n\n";
    string nama;
    int n1;
    char golongan;
    
    cout<<"Masukan nama \t\t";
    cin>>nama;
    cout<<"Masukan Golongan \t";
    cin>>golongan;
    cout<<"Masukan Jumlah Jam \t:";
    cin>>n1;

    switch (golongan){
        case '1' :
        if (n1<=150){
            cout<<"Gaji Pokok :Rp. 1000000\n";
        }else (n1>150);
            cout<<"Uang Lembur :Rp. " <<(n1-150)*10000;
            cout<<"Total Gaji "<<nama<< "Rp. "<<1000000+((n1-150)*10000)<<" Perbulan";
            break;
            case '2' :
            if(n1<=150){
                cout<<"Gaji Pokok :Rp. 2000000\n";
            }else (n1>150);
            cout<<"Uang Lembur :Rp. "<<(n1-150)*20000;
            cout<<"Total Gaji "<<nama<< "Rp. " <<2000000+((n1-150)*20000)<<" Perbulan";
            break;
            case '3' :
            if(n1<=150){
                cout<<"Gaji Pokok :Rp. 3000000\n";
            }else (n1>150);
            cout<<"Uang Lembur \t\t:Rp. "<<(n1-150)*30000;
            cout<<"Total Gaji "<<nama<< "Rp. " <<3000000+((n1-150)*30000)<<" Perbulan";
            break;
            case '4' :
            if(n1<=150){
                cout<<"Gaji Pokok :Rp. 4000000\n";
            }else (n1>150);
            cout<<"Uang Lembur :Rp. "<<(n1-150)*40000;
            cout<<"Total Gaji "<<nama<< "Rp. " <<5000000+((n1-150)*40000)<<" Perbulan";
            break;
            case '5' :
            if(n1<=150){
                cout<<"Gaji Pokok :Rp. 5000000\n";
            }else (n1>150);
            cout<<"Uang Lembur :Rp. "<<(n1-150)*50000;
            cout<<"Total Gaji "<<nama<< "Rp. "<< 5000000+((n1-150)*50000)<<" Perbulan";
            break;
            default :
                cout<<"Pilihan Tidak Tersedia Pada Sistem";
    }
    
}
