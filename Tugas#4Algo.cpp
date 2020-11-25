#include<iostream>
using namespace std;
int main()
{
	cout<<"\t\t\t--------------------"<<endl;
	cout<<"\t\t\tKALKULATOR SEDERHANA"<<endl;
	cout<<"\t\t\t--------------------\n"<<endl<<endl;
	cout<<"Pilih Menu : "<<endl;
	cout<<"------------------"<<endl;
	cout<<"1. Pertambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Sisa Hasil Bagi"<<endl<<endl;
	cout<<"------------------"<<endl;
	int a,b,c, menu;
	float d,e,f;
	cout<<"Masukan Pilihan : ";
	cin>>menu;
	if(menu==1){
		cout<<"\nPertambahan"<<endl;
		cout<<"Masukan Nilai\t: ";
		cin>>d;
		cout<<"Masukan Nilai\t: ";
		cin>>e;
		f=d+e;
		cout<<"Hasil dari "<<d<<"+"<<e<<"\t: ";
		cout<<f;
	}else
	if(menu==2){
		cout<<"\nPengurangan"<<endl;
		cout<<"Masukan Nilai\t: ";
		cin>>d;
		cout<<"Masukan Nilai\t: ";
		cin>>e;
		f=d-e;
		cout<<"Hasil dari "<<d<<"-"<<e<<"\t: ";
		cout<<f;
	}else
	if(menu==3){
		cout<<"\nPerkalian"<<endl;
		cout<<"Masukan Nilai\t: ";
		cin>>d;
		cout<<"Masukan Nilai\t: ";
		cin>>e;
		f=d*e;
		cout<<"Hasil dari "<<d<<"x"<<e<<"\t: ";
		cout<<f;
	}else
	if(menu==4){
		cout<<"\nPembagian"<<endl;
		cout<<"Masukan Nilai\t: ";
		cin>>d;
		cout<<"Masukan Nilai\t: ";
		cin>>e;
		f=d/e;
		cout<<"Hasil dari "<<d<<":"<<e<<"\t: ";
		cout<<f;
	}else
	if(menu==5){
		cout<<"\nSisa Hasil Bagi"<<endl;
		cout<<"Masukan Nilai\t: ";
		cin>>a;
		cout<<"Masukan Nilai\t: ";
		cin>>b;
		c=a%b;
		cout<<"Sisa dari "<<a<<":"<<b<<"\t: ";
		cout<<c;
	}else
	{
		cout<<"Menu Tidak Ada";
	}
	return false;
}
