//Procedure dan Function
#include <iostream>
using namespace std;
int function_td (int j, int m, int d);
int function_waktu (int td);
void tampil (int show);
int main(){
	cout<<"\t--------------------------\n";
	cout<<"\tProgram Function Konversi\n";
	cout<<"\t--------------------------\n";
	
	cout<<endl;
	cout<<endl;
	int td,waktu,a,b,c,d;
	td=function_td(a,b,c);
	tampil(td);
	waktu=function_waktu(d);
	return 0;
}
//function mencari total detik
int function_td(int j, int m, int d){
	int td;
	cout<<"=============================\n";
	cout<<"Konversi waktu ke total detik\n";
	cout<<"=============================\n\n";
	cout<<"=============================\n";
	cout<<"\tMasukan waktu"<<endl;
	cout<<"=============================\n\n";
	cout<<"Masukan jam\t\t: ";cin>>j;
	cout<<"Masukan menit\t\t: ";cin>>m;
	cout<<"Masukan Detik\t\t: ";cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<"Total Detiknya adalah\t: ";
	return td;
}
//function konversi total detik ke jam, menit dan detik
int function_waktu(int td){
	int j,m,sm,d;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"=========================================\n";
	cout<<"Konversi total detik ke jam, menit, detik\n";
	cout<<"=========================================\n\n";
	cout<<"Masukan total detik\t: ";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<"Waktu Awalnya Adalah\t: "<<j<<";"<<m<<";"<<d<<endl;
	return 0;
}
void tampil (int show){
	cout<<show;
}
