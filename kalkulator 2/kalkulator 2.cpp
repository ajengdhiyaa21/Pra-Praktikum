#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int bil1,bil2, pil;
	float hasil;
	string operasi;
	
	cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<endl;
	
	cout<<"Masukkan pilihan = ";
	cin>>pil;
	cout<<"Masukkan bilangan pertama = ";
	cin>>bil1;
	cout<<"Masukkan bilangan kedua = ";
	cin>>bil2;
	
	switch(pil){
		case 1 : hasil=bil1+bil2;
		operasi='+';
		case 2 : hasil=bil1-bil2;
		operasi='-';
		break;
	}
	getch();
}
