#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int jmlhAngka;

void insertionSort(int size, int *array)
{
	int value, j;
	for (int i = 1; i < size; ++i)
	{
		value = array[i];
		j = i;
		while (j > 0 && array[j - 1] > value)
		{
			array[j] = array[j - 1];
			j--;
		}
		array[j] = value;
		cout << "Proses Pengurutan : ";
		for (int i = 0; i < size; ++i)
		{
			cout << "{" << array[i] << "} ";
		}
		cout << endl;
	}
}

int main()
{
	cout << "|==========================|" << endl;
	cout << "| Algoritma Insertion Sort |" << endl;
	cout << "|==========================|" << endl;
	cout << "Jumlah Angka : ";
	cin >> jmlhAngka;
	int randArray[jmlhAngka];
	srand(time(0));

	for (int i = 0; i < jmlhAngka; ++i)
	{
		randArray[i] = rand() % 100 + 1;
	}

	cout << "Angka Sebelum Sort : ";
	for (int i = 0; i < jmlhAngka; ++i)
	{
		cout << randArray[i] << " ";
	}

	cout << endl
		 << endl;

	insertionSort(jmlhAngka, randArray);

	cout << endl;

	cout << "Angka Setelah Sort : ";
	for (int i = 0; i < jmlhAngka; ++i)
	{
		cout << randArray[i] << " ";
	}
}
