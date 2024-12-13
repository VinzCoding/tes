#include <iostream>
using namespace std;

int main(){
    // int bilangan = 1;
    int inputBilangan;
    int total = 0;

    while (inputBilangan!=0){

        //nampilin bilangan genap saja
        // if(bilangan % 2 == 0) cout << bilangan << endl;
        // bilangan++;
        cin >> inputBilangan;
        if(inputBilangan == 0) break; // AKU Pakai satu line karena prosesnya cuma 1 line (yaitu break)
        total+=inputBilangan; //total = total + inputBilangan
        cout << "Total : " << total << endl;
    }

    cout << "Keluar Looping\n";
    cout << "Total akhir : " << total;
    

}