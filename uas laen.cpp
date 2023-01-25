#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int jmlhHuruf;
int jmlhNilai;

int main() {
	cout<<"Berapa Huruf? ";
	cin>>jmlhHuruf;
	
	char arrayHuruf[jmlhHuruf];	
	int p = 1;
	
	for(int i=0; i<jmlhHuruf; i++) {
		cout<<"Huruf ke-"<<p++<<" : ";
		cin>>arrayHuruf[i];
		
		switch (arrayHuruf[i]) {
			case 'a':
				jmlhNilai += 1;
				break;
			case 'b':
				jmlhNilai += 2;
				break;
			case 'c':
				jmlhNilai += 3;
				break;
			case 'd':
				jmlhNilai += 4;
				break;
			case 'e':
				jmlhNilai += 5;
				break;
		}
	}
	
	cout<<endl;
	for(int i=0; i<jmlhHuruf; i++) {
		cout<<arrayHuruf[i];
	}
	cout<<endl<<endl;
	
	cout<<"Jumlah Nilai : "<<jmlhNilai<<endl;
	
}
