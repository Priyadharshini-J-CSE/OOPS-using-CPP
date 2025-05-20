#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main(){
   const int n=5;
    array<int,n>a1 ={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout << a1.at(i)<< " ";
    }
    cout << endl;
    // for(int i=0;i<5;i++){
    //     cout << get<i>(a1) << " ";
    // }
    cout << get<0>(a1);
    cout << endl;
   
    for(auto i : a1){
        cout << i << " ";
    }
    cout << endl;
    for(int i=0;i<5;i++){
        cout << a1[i] << " ";
    }
    cout << endl;
    int &a=a1.front();
    int &b=a1.back();
    cout << a << " " << b << endl;
    a=10;
    b=60;
    cout << a << " " << b << endl;
    array<int,n> a2={6,7,8,9,10};
    a1.swap(a2);
    for(auto i: a2){
        cout << i << " ";
    }
    array<int,0>a3;
    cout << endl;
    cout << a1.empty() << " " << a3.empty();
    /*for(int i=0;i<n;i++){
        cout << a3[i] << " ";
    }*/
    cout << endl;
    // cout << a1.fill();
    a1.fill(0);
    for(int i=0;i<n;i++){
        cout << a1[i] << " ";
    }
    return 0;
}