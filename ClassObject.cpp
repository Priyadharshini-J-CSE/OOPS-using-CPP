#include<iostream>
using namespace std;
//Create the class
class Room{
    public:
    double len;
    double bre;
    double hei;
    double calculateArea(){
return len*bre;
    }
    double calculateVolume(){
        return len*bre*hei;
    }
};
int main(){
     Room r1;
     r1.len=5.0;
     r1.bre=10.0;
     r1.hei=13.0;
cout << "Area of the room : " << r1.calculateArea() << endl;
cout << "Volume of the room : " << r1.calculateVolume() << endl;

   
    return 0;
}
