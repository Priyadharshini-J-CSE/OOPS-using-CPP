#include<iostream>
using namespace std;
class Cube{
private:
int n;
public:
void setvalue(int no){
    n=no;
}
friend void displayCube(Cube); //friend void display(Cube &)->same memory address
};
void displayCube(Cube c){
 
    for(int i=1;i<=c.n;i++){
cout << "cube of " << i << " is " << i*i*i <<endl ;
    }
    
}
int main(){
    Cube c;
    int n;
    cin >> n;
    c.setvalue(n);
   displayCube(c);
    return 0;
}