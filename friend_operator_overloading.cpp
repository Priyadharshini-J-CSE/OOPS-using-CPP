#include<iostream>
using namespace std;
class location{
    private:
    int latitude;
    int longitude;
    public:
    location(){};
    location(int la,int lo){
        latitude=la;
        longitude=lo;
    }
    void show(){
        cout << "Latitude: " << latitude  << " Longitude: " << longitude << endl;
    }
    friend location operator+(location obj);
    friend location operator-(location obj);
    
};
    
    location operator+(location obj1,location obj2){
        location res;
        res.latitude=obj1.latitude+obj2.latitude;
        res.longitude=obj1.longitude+obj2.longitude;
        return res;
    }
    location operator-(location obj1,location obj2){
        location res;
        res.latitude=obj1.latitude+obj2.latitude;
        res.longitude=obj1.longitude+obj2.longitude;
        return res;
    }
    // location operator=(location obj){
    //     latitude=obj.latitude;
    //     longitude=obj.longitude;
    //     return *this;
    // }
    // //Unary operator overloading
    // location operator++(){
    //     latitude++;
    //     longitude++;
    //     return * this;
    // }



int main(){
    location l1(5,3), l2(7,8);
    location l3,l4,l5,l6;
    l3=l1+l2;//l3=l1+(l2)
    l3.show();
    l4=l1-l2;
    l4.show();
    ++l5; //++l5
    l5.show();

}