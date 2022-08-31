#include <iostream>

using namespace std;

int main (){
	string g;
	int jarak, biaya;
	cout<<"Pilih GoRide / GoCar"<<endl;
	cin>>g;
	if (g=="goride"||g=="GORIDE"||g=="GoRide"||g=="Goride") {
		cout<<"Masukkan jarak = 5?10?15?"<<endl;
		cin>>jarak;
		if (jarak<=5){
			biaya = (5*2000)+5000;
			cout<<"Biaya anda = "<<biaya<<endl;
		} else if (jarak<=10){
			biaya = (10*2500)+7500;
			cout<<"Biaya anda = "<<biaya<<endl;
		} else if (jarak<=15){
			biaya = (15*3000)+10000;
			cout<<"Biaya anda = "<<biaya<<endl;
		} else {
			cout<<"Maaf pesanan anda tidak dapat dilayani"<<endl;
		}
		
	} else if (g=="gocar"||g=="GOCAR"||g=="GoCar"||g=="Gocar"){
		cout<<"Masukkan jarak = 5?10?15?"<<endl;
		cin>>jarak;
		if (jarak<=5){
			biaya = (5*3000)+15000;
			cout<<"Biaya anda = "<<biaya<<endl;
		} else if (jarak<=10){
			biaya = (10*4500)+17500;
			cout<<"Biaya anda = "<<biaya<<endl;
		} else if (jarak<=15){
			biaya = (15*5000)+20000;
			cout<<"Biaya anda = "<<biaya<<endl;
		} else {
			cout<<"Maaf pesanan anda tidak dapat dilayani"<<endl;
		}
	} else {
		cout<<"Pilih antara = GoRide/GoCar"<<endl;
	}
	
	return 0;
}
