//Nama: Aprilia Anggun Sari Rahmawati
//NPM: 2117051038
//Kelas: D

#include <bits/stdc++.h>
#include "stak.h" //MEMANGGIL HEADER STACK

using namespace std;

int main(){
	cout<<"hello word";
	cout<<"gilang, april, ika";
	int p; //UNTUK MEMASUKAN PILIHAN MENU
	
	do{
		print();
		
		//MENU-MENU YANG TERDAOAT PADA PROGRAM
		cout<<"\n1. push\n";
		cout<<"2. pop\n";
		cout<<"3. clear\n";
		cout<<"4. exit\n";
		
		cout<<"pilih menu: ";
		cin>>p; //MASUKAN PILIHAN MENU
		
		system("cls");
		
		if(p == 1){
			push(); //JIKA MEMILIH MENU 1 MAKA PROGRAM AKAN MEMANGGIL PROSEDUR PUSH
		}else if(p == 2){
			pop(); //JIKA MEMILIK MENU 2 MAKA PROGRAM AKAN MEMANGGIL PROSEDUR POP YANG SUDAH DIBUAT PADA HEADER STACK
		}else if(p == 3){
			clear(); //JIKA MEMILIH MENU 3 MAKA PROGRAM AKAN MEMANGGIL FUNGSI CLEAR YANG SUDAH DIBUAT PADA HEADER STATCK
			cout<<"koin dibersihkan\n";
		}else if(p == 4){
			cout<<"~~Thankyou~~\n"; //JIKA MEMILIH MENU 4 MAKA PROGRAM AKAN SELESAI
		}else{
			cout<<"pilihan tidak tersedia~\n"; //JIKA MEMILIH DILUAR 1 SAMPAI 4 MENU TERSEBUT MAKA PILIHAN TIDAK TERSEDIA
		}
	}
	while(p != 4);
	
	return 0;
}
