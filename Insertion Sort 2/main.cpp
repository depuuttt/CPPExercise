#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{

	srand(time(0));
	int y;

	cout << "Masukkan banyak data(Max.20) : ";
	cin >> y;
	int randNumb[y];
	cout << endl;

	int i = 1;
	cout << "Angka: ";
	while (i <= y)
	{
		randNumb[i] = rand() % 100 + 1;
		cout << randNumb[i] << " ";
		i += 1;
	}

	cout << endl;

	for (int i = 1; i <= y; i++)
	{
		int key = randNumb[i];
		int j = i - 1;
		while (j >= 1 && randNumb[j] > key)
		{
			randNumb[j + 1] = randNumb[j];
			j = j - 1;
		}

		randNumb[j + 1] = key;
		cout << "Proses Pengurutan" << endl;
		for (int m = 1; m <= y; m++)
		{
			cout << "{" << randNumb[m] << "} ";
		}
		cout << endl;
	}

	cout << endl;
	cout << "Hasil Akhir" << endl;
	for (int m = 1; m <= y; m++)
	{
		cout << "{" << randNumb[m] << "} ";
	}
}
