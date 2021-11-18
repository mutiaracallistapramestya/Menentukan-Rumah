#include <iostream>
#include <cstdio>
using namespace std;

int main (){
	int x;
	cout<<"Banyaknya Rumah Gaya Asri: ";
	cin>>x;
	cin.ignore(512,'\n');
	
	string a[x];
	string b[x];
	string c[x];
	string d[x]; 
	
	if(x%2==0){
		for (int i=0; i<x; i++){
			cout<<"Masukan Nama Pemilik Rumah: ";
			getline (cin,a[i]);
			
			cout<<"Masukan Alamat Rumah: ";
			getline (cin,b[i]);
		}
	}else{
		for (int i=0; i<x; i++){
			cout<<"Masukan Nama Pemilik Rumah: ";
			getline (cin,a[i]);
			
			cout<<"Masukan Alamat Rumah: ";
			getline (cin,b[i]);	
		}	
	}
	for(int i=0; i<1; i++){
		cout<<"Masukan Nama Pemilik Rumah Yang Ingin Dicek: ";
		getline (cin,c[i]);
		cout<<"Masukan Alamat Rumah Yang Ingin Dicek: ";
		getline (cin,d[i]);
		
	}
	if(x%2==0){
		if (c[0]==a[0] && d[0]==b[0] || c[0]==a[1] && d[0]== b[1] ){
			cout<<"Rumah Ditemukan";
	}
		else {
		cout<<"Rumah Tidak Ditemukan";
	}
}
	
	else if (x%2!=0){
		if (c[0]==a[0] && d[0]==b[0] || c[0]==a[1] && d[0]== b[1] || c[0]==a[2] && d[0]==b[2]){
		cout<<"Rumah Ditemukan ";
	}else {
		cout<<"Rumah Tidak Ditemukan";
	}
	
	}
	
	
	


	
	return 0;
}
