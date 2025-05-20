#include<iostream>
#include <cctype> // Required for toupper() and tolower()
using namespace std;
int main(){
    char ch1,ch2;
    cin >> ch1 >> ch2;
    cout << toupper(ch1) << " " << (char)tolower(ch1); // type casting in the function is required else it print ascii values

    return 0;
}