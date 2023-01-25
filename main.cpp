#include <iostream>
#include <stdio.h>

using namespace std;

char pilihan;
int sisi;

int main() {
	cout<<"A. Luas Kubus"<<endl;
	cout<<"B. Volume Kubus"<<endl;
	cout<<"pilih : ";
	cin>>pilihan;
	
	cout<<"Sisi Kubus :";
	cin>>sisi;
	
	switch(pilihan) {
		case 'a':
			cout<<"\nLuas Kubus = "<< sisi * sisi;
			break;
		case 'b':
			cout<<"\nVolume Kubus = "<< sisi * sisi * sisi;
			break;
	}
}
