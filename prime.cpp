#include<iostream>
using namespace std;
int main(){
int num,flag=0;
cout << "Enter the number";
cin >> num;
for(int i=2;i<num/2;i++){
    if(num%i==0) flag++;
}
if(flag==0){
    cout << "Prime number";
}
else cout << "Not prime number";
    return 0;
}