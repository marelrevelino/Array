#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Masukan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    cout << "Masukan " << n << " elemen array." << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Nilai ke- " << i << " : ";
        cin >> arr[i];
    }

    int max_val = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max_val)
        {
            max_val = arr[i];
        }
    }

    cout << "Nilai tertinggi: " << max_val << endl;

    int find;
    cout << "Masukan angka yang ingin dicari: ";
    cin >> find;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            cout << "Angka " << find << " ditemukan pada indeks " << i << "." << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Angka " << find << " tidak ditemukan dalam array.";
    }

    return 0;
}
