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
		cout<<"\nMasukan Nilai\t: ";
		cin>>a;
		cout<<"Masukan Nilai\t: ";
		cin>>b;
		c=a+b;
		cout<<"Hasil\t\t: ";
		cout<<c;
	}else if(menu==2){
		cout<<"Masukan Nilai\t: ";
		cin>>a;
		cout<<"Masukan Nilai\t: ";
		cin>>b;
		c=a-b;
		cout<<"Hasil\t\t: ";
		cout<<c;
	}else if(menu==3){
		cout<<"Masukan Nilai\t: ";
		cin>>a;
		cout<<"Masukan Nilai\t: ";
		cin>>b;
		c=a*b;
		cout<<"Hasil\t\t: ";
		cout<<c;
	}else if(menu==4){
		cout<<"Masukan Nilai\t: ";
		cin>>a;
		cout<<"Masukan Nilai\t: ";
		cin>>b;
		c=a/b;
		cout<<"Hasil\t\t: ";
		cout<<c;
	}else if(menu==5){
		cout<<"Masukan Nilai\t: ";
		cin>>a;
		cout<<"Masukan Nilai\t: ";
		cin>>b;
		c=a%b;
		cout<<"Hasil\t\t: ";
		cout<<c;
	}else{
		cout<<"Menu Tidak Ada";
	}
	return false;
}
