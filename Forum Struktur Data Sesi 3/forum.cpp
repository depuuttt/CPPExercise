//                      //
//      2021080122      //
//  Aldi Maulana Iqbal  //
//                      //
#include <iostream>

using namespace std;

int main()
{
    int data[5] = {12, 14, 15, 12, 5}, key;
    bool findData = false;
    cout << "Masukan Data yang akan dicari : ";
    cin >> key;

    for (int i = 0; i < 5; i++)
    {
        if (data[i] == key)
        {
            cout << "Data " << key << " ada di Index " << i << endl;
            findData = true;
        }
    }

    if (!findData)
    {
        cout << "Data tidak ada!" << endl;
    }

    return 0;
}
