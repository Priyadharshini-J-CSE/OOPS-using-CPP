#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string name;
    cout << setfill('*') << setw(5) << endl;
    cout << setw(4) << "Welcome\n";
    cout << setprecision(2) << 45.6123 << endl;
    cout << fixed << 45.612 << endl;
    cout << scientific << 456.003 << endl;
    cout << hex << 16 << endl;
    cout << dec << 255 << endl;
    cout << oct << 377 << endl;
    getline(cin,name);
    cout << name;

   
    return 0;
}