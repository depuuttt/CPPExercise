#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int pilihJumlah;
char res;
bool active = true;
float jmlhArray, rataRata, deviasiStandar = 0.0;

int main()
{
	while (active)
	{

		cout << "~~Menentukan Jumlah Data~~" << endl
			 << endl;
		cout << "Jumlah dari data (Max. 1000) : ";
		cin >> pilihJumlah;

		int arrayData[pilihJumlah];

		cout << endl;

		for (int i = 1; i <= pilihJumlah; i++)
		{
			cout << "Nilai data ke " << i << " : ";
			cin >> arrayData[i];
			jmlhArray += arrayData[i];
		}

		cout << endl;

		rataRata = jmlhArray / pilihJumlah;

		for (int i = 1; i <= pilihJumlah; i++)
		{
			deviasiStandar += pow(arrayData[i] - rataRata, 2);
		}

		cout << "Jumlah Data     : " << pilihJumlah << endl;
		cout << "Total Nilai     : " << jmlhArray << endl;
		cout << "Nilai Rata-Rata : " << rataRata << endl;
		cout << "Deviasi Standar : " << sqrt(deviasiStandar / pilihJumlah) << endl;

		cout << endl;
		cout << "Coba Lagi ? (Y/N)";
		cin >> res;
		cout << endl;
		if (res == 'n' || res == 'N')
		{
			cout << "Terima Kasih :)" << endl;
			active = false;
		}
		else
		{
			active = true;
			cout << endl;
		}
	}
}
