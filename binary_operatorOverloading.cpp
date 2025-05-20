#include<iostream>
using namespace std;
class location{
    private:
    int latitude;
    int longitude;
    public:
    // location(){}
    location(int la=0,int lo=0){
        latitude=la;
        longitude=lo;
    }
    location operator+(location obj){
        location res;
        res.latitude=obj.latitude+latitude;
        res.longitude=obj.longitude+longitude;
        return res;
    }
    location operator-(location obj){
        location res;
        res.latitude=obj.latitude-latitude;
        res.longitude=obj.longitude-longitude;
        return res;
    }
    location operator=(location obj){
        latitude=obj.latitude;
        longitude=obj.longitude;
        return *this;
    }
    //Unary operator overloading
    location operator++(){
        latitude++;
        longitude++;
        return * this;
    }
void show(){
    cout << "Latitude: " << latitude  << " Longitude: " << longitude << endl;
}

};
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