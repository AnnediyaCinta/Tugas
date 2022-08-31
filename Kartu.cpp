#include <iostream>

using namespace std;

int main (){
	string kartu, bonus;
	cout<<"Masukkan kartu anda Gold/Premium"<<endl;
	cin>>kartu;
	if (kartu == "gold"||kartu == "GOLD"||kartu == "Gold") {
		cout<<"Pilih bonus anda Ambil/Tukar"<<endl;
		cin>>bonus;
		if (bonus == "ambil"||bonus == "AMBIL"||bonus == "Ambil") {
			cout<<"Kartu anda = "<<kartu<<" Selamat bonus anda telah diambil"<<endl;
		} else if (bonus == "Tukar") {
			cout<<"Kartu anda = "<<kartu<<" Selamat bonus anda telah masuk ke poin"<<endl;
		}	
	} else if (kartu == "Premium") {
		cout<<"Pilih bonus anda Ambil/Tukar"<<endl;
		cin>>bonus;
		if (bonus == "ambil"||bonus == "AMBIL"||bonus == "Ambil") {
			cout<<"Kartu anda = "<<kartu<<" Selamat bonus anda telah diambil"<<endl;
	}	else if (bonus == "Tukar") {
			cout<<"Kartu anda = "<<kartu<<" Selamat bonus anda telah masuk ke poin"<<endl;
	}
	}
	
	return 0;
}
