#include<iostream>
using namespace std;
class Temp{
    int x=10;
    double x1=10.1;
    public:
    void add(int y){
        cout << x+y << endl;
    }
    void add(double y){
        cout << x1+y << endl;
    }
    void add(int y,int z){
        cout << x+y+z << endl;
    }
};
int main(){
    Temp obj;
    obj.add(10);
    obj.add(10.1);
    obj.add(10,20);
return 0;
}