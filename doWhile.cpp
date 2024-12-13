#include <iostream>
using namespace std;

int main(){
    // int bilangan = 1;
    int inputBilangan;
    int total = 0;
    // cout << "Total : " << total << endl;
    do
    {
        cout << "Total : " << total << endl;
        cin >> inputBilangan;
        total+=inputBilangan; //total = total + inputBilangan
    } while (inputBilangan != 0);
    
    cout << "Keluar Looping\n";
    cout << "Total akhir : " << total;
    

}