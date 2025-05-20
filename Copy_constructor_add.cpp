#include<iostream>
using namespace std;
class Class2;
class Class1{
    private:
    int num1;
    public:
    
    void Getnum1(){
        cout << "Enter the num1: ";
        cin >> num1;
    }
    friend class Class2;
};
class Class2{
    private:
    int num2;
    public:
    void Getnum2(){
        cout << "Enter the num2: ";
        cin >> num2;
    }
    void add(Class1& obj1){
        
        cout << obj1.num1+num2;
    }

};
int main(){
   Class1 c1;
    Class2 c2;
    c1.Getnum1();
    c2.Getnum2();
    c2.add(c1);
    return 0;
}