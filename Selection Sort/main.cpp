#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int jmlhAngka;

void tukar(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void selectionSort(int size, int *array) {
   int min;
   for (int i = 0; i < size - 1; i++)
   {
   	min = i;
   	for (int j = i + 1; j < size; j++)
   	{
   		if (array[j] < array[min])
   		{
   			min = j;
   		}
   	}
   	tukar(array[i], array[min]);
   	cout<<"Proses Pengurutan : ";
   	for (int i = 1; i < size; ++i)
   	{
   		cout<<array[i]<<" ";
   	}
   	cout<<endl;
   }
}

int main() {
	cout<<"Jumlah Angka : ";
	cin>>jmlhAngka;
	int randArray[jmlhAngka];
	srand(time(0));
	
	for (int i = 0; i < jmlhAngka; ++i)
	{
		randArray[i] = rand() % 100 + 1;
	}

	cout<<"Angka Sebelum Sort : ";
	for (int i = 0; i < jmlhAngka; ++i)
	{
		cout<<randArray[i]<<" ";
	}

	cout<<endl;

	selectionSort(jmlhAngka, randArray);

   	cout<<"Angka Setelah Sort : ";
	for (int i = 0; i < jmlhAngka; ++i)
	{
		cout<<randArray[i]<<" ";
	}
}

