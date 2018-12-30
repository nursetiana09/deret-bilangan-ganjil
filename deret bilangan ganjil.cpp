#include <iostream>
using namespace std;

int main()
{

    int n,i;
    cout << "\nPROGRAM UNTUK MENENTUKAN DERET BILANGAN GANJIL";

    cout << "masukan angka ke-n: ";
    cin >> n;

    cout << endl;

    for (i=0; i <= n; i++)
{
    if ( i% 2 !=0)
    {
        cout << i << " ";
    }
}
cout << "\n" <<endl;
return 0;
}
