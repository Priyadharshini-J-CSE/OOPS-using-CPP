#include<iostream>

using namespace std;
int main(){
    int num,temp,rem,sum=0;
    cout << "Enter the number: ";
    cin >> num;
temp=num;
while(num!=0){
    rem=num%10;
    sum=sum+(rem*rem*rem);
    num /=10;
}
if(sum==temp){
    cout << "Armstrong number";
}
else cout << "Not Armstrong number";
    return 0;
}