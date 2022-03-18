#include<iostream>
#include "kalkulator.h"
using namespace std;
int main(){
	
	char operasi;
	int menu, a, b;
	cout<<"=== PROGRAM KALKULATOR ==="<<endl;
	cout<<"Menu Operasi :"<<endl;
	cout<<"1. Penambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	
	cout<<"Pilih menu no :";cin>>menu;
	cout<<"Masukkan bilangan pertama :";cin>>a;
	cout<<"Masukkan bilangan kedua :";cin>>b;
	
	switch (menu){
		case 1 :
			cout<<"Hasil "<<a<<"+"<<b<<" = "<<Penambahan(a,b)<<endl;
			break;
		case 2 :
			cout<<"Hasil "<<a<<"-"<<b<<" = "<<Pengurangan(a,b)<<endl;
			break;
		case 3 :
			cout<<"Hasil "<<a<<"x"<<b<<" = "<<Perkalian(a,b)<<endl;
			break;
		case 4 :
			cout<<"Hasil "<<a<<":"<<b<<" = "<<Pembagian(a,b)<<endl;
			break;
	}
	return 0;
}
