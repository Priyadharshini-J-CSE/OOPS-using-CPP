#include<iostream>
using namespace std;
//Create the class
class Room{
    private: //public fun or friend fun
    double len;
    double bre;
    double hei;
    public:
    void calculateArea(double length,double breadth){
     len=length;
     bre=breadth;
     cout << "Area of the room : "  << len*bre<< endl;

    }
    void calculateVolume(double length,double breadth,double height){
         len=length;
         bre=breadth;
         hei=height;
         cout << "Volume of the room : " << len*bre*hei << endl;

    }
};
int main(){
     Room r1;
     r1.calculateArea(3.0,4.0);
     r1.calculateVolume(3.9,4.9,5.6);
// cout << "Area of the room : "  <<  r1.calculateArea(3.0,4.0)<< endl;
// cout << "Volume of the room : " <<  r1.calculateVolume(3.9,4.9,5,6) << endl;

   
    return 0;
}
