#include <iostream>
#include <stdio.h>

using namespace std;

int jmlh_deret, totalDK;
float rataDK;

int main()
{
	cout<<"==============================="<<endl;
	cout<<"| TUGAS STRUKTUR  DATA SESI 2 |"<<endl;
 	cout<<"==============================="<<endl;
 	cout<<endl;

 	cout << "Jumlah deret : ";
 	cin>>jmlh_deret;

 	cout << endl;

 	//Struktur Data Array
 	cout<<"Struktur Data Array"<<endl;
 	for (int i = 1;i <= jmlh_deret; i++) {
    	cout<<i<<" ";
 	}

 	cout<<endl<<endl;

 	//Hasil Deret Kubik
 	int nilaiDK;
 	cout<<"Hasil Deret Kubik"<<endl;
 	for (int j = 1;j <= jmlh_deret; j++) {
    	nilaiDK = j*j*j;
    	cout<<nilaiDK<<" ";
    	totalDK+=nilaiDK;
 	}

 	cout<<endl<<endl;

 	rataDK = (float)totalDK/(float)jmlh_deret;

 	cout<<"Total Deret Kubik           : "<<totalDK<<endl;
 	cout<<"Nilai Rata-Rata Deret Kubik : "<<rataDK<<endl;

 	cout<<endl;
}
