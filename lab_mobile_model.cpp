/*Develop a MobilePhone class with attributes brand, model, price, and batteryLife.
Implement a constructor that initializes default values, another that accepts values
from the user, and a way to create a new phone object from an existing one. Add a
method to check if the phone is affordable based on a given budget. Which
constructors will be necessary for these different cases?*/

#include<iostream>
using namespace std;
class MobilePhone {
    private:
    string brand;
    string model;
    double price;
    double batterylife;
    public:
    //default constructor
    MobilePhone(){
        brand="ABC";
        model="ABC";
        price=0;
        batterylife=0;

    }
    //parametrized constructor
    MobilePhone(string b,string m,double p,double batlife){
        brand=b;
        model=m;
        price=p;
        batterylife=batlife;
    }
    //copy constructor
    MobilePhone(MobilePhone &t){
        brand=t.brand;
        model=t.model;
        price=t.price;
        batterylife=t.batterylife;
    }
    void disp(){
        cout << "\nBrand Name: " <<  brand;
        cout << "\nModel Name: " << model;
        cout << "\nPrice: " << price;
        cout << "\nBattery Life: " << batterylife<<endl;
        }

    bool isaffordable(int b)
    {
        if(b>price)
            return false;
        else
            return true;
    }

};

int main()
{
    MobilePhone M1;
    M1.disp();
    MobilePhone M2("Samsung","Galaxy S23",30000,24);
    M2.disp();
    int budget;
    cout<<"\nEnter your Budget : ";
    cin>>budget;
    if(M2.isaffordable(budget))
        cout<<"\nIt is affordable";
    else
        cout<<"\nNot affordable";

    MobilePhone M3=M2;
    M3.disp();
 return 0;
}