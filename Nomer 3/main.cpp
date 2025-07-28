#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

int temp, jmlhAngka, nilaiBaru;
double rata, jmlhNilai;
char choose;

int main()
{
	cout << "|==========================|" << endl;
	cout << "|        Angka Acak        |" << endl;
	cout << "|  Rata-Rata dan Menambah  |" << endl;
	cout << "|     Nilai Bukan Acak     |" << endl;
	cout << "|==========================|" << endl;
	cout << "Masukkan Jumlah Angka : ";
	cin >> jmlhAngka;
	int randNumb[jmlhAngka];
	srand(time(0));

	cout << endl;

	cout << "Angka : ";
	for (int i = 1; i <= jmlhAngka; ++i)
	{
		randNumb[i] = rand() % 100 + 1;
		cout << randNumb[i] << " ";
		jmlhNilai += randNumb[i];
	}
	cout << endl;
	cout << "Jumlah Nilai : " << jmlhNilai << endl;
	cout << "Rata Rata    : " << (double)jmlhNilai / (double)jmlhAngka << endl;

	cout << endl;
	bool active = true;
	while (active)
	{
		cout << endl;
		cout << "Tambah data baru?(Y/N) ";
		cin >> choose;

		if (choose == 'n' || choose == 'N')
		{
			return 0;
		}
		else
		{
			cout << "Nilai Baru : ";
			cin >> nilaiBaru;

			randNumb[jmlhAngka += 1] = nilaiBaru;

			cout << "Angka :";
			for (int i = 1; i <= jmlhAngka; ++i)
			{
				cout << randNumb[i] << " ";
				jmlhNilai += randNumb[i];
			}

			cout << endl;
			cout << "Jumlah Nilai : " << jmlhNilai << endl;
			cout << "Rata Rata    : " << (double)jmlhNilai / (double)jmlhAngka << endl;
		}
	}
}
