#include<iostream>
using namespace std;
int main()
{
    cout << "\nEnter temperature in Celsius: ";
    float celsius;
    cin >> celsius;
    float fahrenheit = (celsius * 9/5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;
}