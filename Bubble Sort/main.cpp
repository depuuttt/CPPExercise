#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int jmlhAngka;

void swapping(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int size, int *array)
{
	for (int i = 0; i < size; i++)
	{
		bool swaps = false;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapping(array[j], array[j + 1]);
				swaps = true;
			}
			cout << "Proses Pengurutan : ";
			for (int i = 0; i < size; ++i)
			{
				cout << "{" << array[i] << "} ";
			}
			cout << endl;
		}
		if (!swaps)
		{
			break;
		}
	}
}

int main()
{
	cout << "|==========================|" << endl;
	cout << "|  Algoritma Bubble Sort   |" << endl;
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

	cout << endl;

	bubbleSort(jmlhAngka, randArray);

	cout << "Angka Setelah Sort : ";
	for (int i = 0; i < jmlhAngka; ++i)
	{
		cout << randArray[i] << " ";
	}
}
