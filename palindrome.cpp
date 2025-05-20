#include<iostream>
using namespace std;
int main(){
    int num,rev=0;
    cout << "Enter the number: ";
    cin >> num;
    int temp=num;
    while(num!=0){
        rev=rev*10+num%10;
        num /= 10;
    }
    if(rev==temp) cout << "Palindrome";
    else cout << "Not Palindrome";
}