#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a = 1, b = 2, c = 3; 
string nama;
int lengNama;

int main() {
	cout<<"Masukkan Nama : ";
	cin>>nama;
	
	lengNama = nama.length();
	char arrayNama[lengNama];
	for (int i=0; i < lengNama; i++) {
		arrayNama[i] = nama[i];
		cout<<arrayNama[i]<<endl;
	}
}
