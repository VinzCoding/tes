#include <iostream>
using namespace std;

int main()
{
    int menu;
    int harga = 0, jumlah_tiket;
    int total_harga;
    char balik;
    do
    {
        do
        {
            system("CLS");
            cout << "SELAMAT DATANG DI JAWA TIMUR PARK" << endl;
            cout << "Paket 1 (Batu Secret Zoo + Eco Green Park)" << endl;
            cout << "Paket 2 (Museum Satwa + Eco Green Park)" << endl;
            cout << "Paket 3 (Batu Secret Zoo + Museum Satwa + Eco Green Park)" << endl;
            cout << "Pilih Menu : ";
            cin >> menu;
            switch (menu)
            {
            case 1:
                cout << "Batu Secret Zoo & Eco Green Park" << endl;
                cout << "Harga : 120000/tiket" << endl;
                harga = 120000;
                break;
            case 2:
                cout << "Museum Satwa & Eco Green Park" << endl;
                cout << "Harga : 110000/tiket" << endl;
                harga = 110000;
                break;
            case 3:
                cout << "Batu Secret Zoo, Museum Satwa, & Eco Green Park" << endl;
                cout << "Harga : 300000/tiket" << endl;
                harga = 300000;
                break;
            default:
                cout << "Invalid Input\n";
                system("PAUSE");
            }
            // kesini abis break switch
        } while (menu <= 0 || menu > 3);

        cout << "Jumlah Tiket : ";
        cin >> jumlah_tiket;
        total_harga = jumlah_tiket * harga;
        cout << "Total Bayar : " << total_harga << endl;
        do
        {
            cout << "Mau balik ke menu? (y/n) : "; cin >> balik;
            if(balik != 'y' && balik != 'Y' && balik != 'n' && balik != 'N'){
                cout << "Invalid input\n";
            }
        } while (balik != 'y' && balik != 'Y' && balik != 'n' && balik != 'N');    //stelah lolos dari yang invalid ini
     
        
    } while (balik == 'y' || balik == 'Y');
    cout <<"Program selesai";
    return 0;
}