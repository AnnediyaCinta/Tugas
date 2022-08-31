#include <iostream>

using namespace std;

int main (){
	string lampu;
	cout<<"Masukkan warna lampu Hijau/Merah"<<endl;
	cin>>lampu;
	if (lampu == "Hijau"){ 
		cout<<"Silahkan jalan"<<endl;	
	} else if (lampu == "Merah"){
		cout<<"Berhenti!"<<endl;
	} else {
		cout<<"Ketikkan warna lampu = Hijau/Merah"<<endl;
	}
	
	return 0;
}
