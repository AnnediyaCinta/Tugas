#include <iostream>

using namespace std;

int main(){
	float phi = 3.14;
	float x, y, z, r, t, vbak, vtandon, hasil;
	
	cout<<"VOLUME BAK DAN TANDON"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Masukkan panjang bak = ";
	cin>>x;
	cout<<"Masukkan lebar bak =";
	cin>>y;
	cout<<"Masukkan tinggi bak =";
	cin>>z;
	vbak = x*y*z;
	cout<<"---------------------------------"<<endl;
	cout<<"Masukkan jari jari tandon =";
	cin>>r;
	cout<<"Masukkan tinggi tandon =";
	cin>>t;
	vtandon = phi*r*r*t;
	cout<<"---------------------------------"<<endl;
	cout<<"Volume bak adalah "<<vbak<<endl;
	cout<<"Volume tandon adalah "<<vtandon<<endl;
	hasil = vbak + vtandon;
	cout<<"Hasil volume air adalah " <<hasil<<endl;
	
	return 0;
}
