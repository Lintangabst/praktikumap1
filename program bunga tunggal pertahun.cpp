#include<iostream>
using namespace std;

int main(){
	double a1,a2,a3;
	
	cout<<"Menghitung Bunga Tunggal\n\n";
	cout<<"Bunga Tunggal Pertahun\n";
	cout<<"Masukan Tabungan Akhir :";
	cin>>a1;
	cout<<"Masukan Bunga Pertahun :";
	cin>>a2;
	cout<<"Masukan Lama Menabung :";
	cin>>a3;
	cout<<fixed<<"Tabungan Awal :"<<1/(1+(a2/100)*1+(a2/100)*1+(a2/100))*a1;
}
