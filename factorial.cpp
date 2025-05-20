#include<iostream>
using namespace std;
int main(){
    int num,fact=1;
    cout << "Enter number: ";
    cin >> num;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    cout << "The factorial of the given number " << num << " is " << fact;

    return 0;
}