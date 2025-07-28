#include <iostream>
#include <stdio.h>

using namespace std;

int a, b;
char res;
bool active = true;

int main()
{
	while (active)
	{
		cout << "Masukkan Angka Pertama :";
		cin >> a;
		cout << "Masukkan Angka Kedua   :";
		cin >> b;
		cout << "\n";

		if (a < b)
		{
			cout << a << " <  " << b << " hasilnya adalah 1" << endl;
		}
		else
		{
			cout << a << " <  " << b << " hasilnya adalah 0" << endl;
		}

		if (a <= b)
		{
			cout << a << " <= " << b << " hasilnya adalah 1" << endl;
		}
		else
		{
			cout << a << " <= " << b << " hasilnya adalah 0" << endl;
		}

		if (a > b)
		{
			cout << a << " >  " << b << " hasilnya adalah 1" << endl;
		}
		else
		{
			cout << a << " >  " << b << " hasilnya adalah 0" << endl;
		}

		if (a >= b)
		{
			cout << a << " >= " << b << " hasilnya adalah 1" << endl;
		}
		else
		{
			cout << a << " >= " << b << " hasilnya adalah 0" << endl;
		}

		if (a == b)
		{
			cout << a << " == " << b << " hasilnya adalah 1" << endl;
		}
		else
		{
			cout << a << " == " << b << " hasilnya adalah 0" << endl;
		}

		if (a != b)
		{
			cout << a << " != " << b << " hasilnya adalah 1" << endl;
		}
		else
		{
			cout << a << " != " << b << " hasilnya adalah 1" << endl;
		}

		cout << endl;
		cout << "Coba Lagi ? (Y/N)";
		cin >> res;
		cout << endl
			 << endl;
		if (res == 'n' || res == 'N')
		{
			cout << "Terima Kasih :)" << endl;
			active = false;
		}
		else
		{
			active = true;
		}
	}
}
