#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi variable global array a dengan ukuran 20
int n; //Deklarasi variable global n untuk menyimpan banyaknya elemen pada array

void input()
{ //Prosedur untuk input data ke dalam array
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> n;
        if (n <= 20)
            break;
        else
            cout << "\nArray dapat memiliki maksimal 20 elemen.\n";
    }
    cout << "\n===================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "===================" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}
