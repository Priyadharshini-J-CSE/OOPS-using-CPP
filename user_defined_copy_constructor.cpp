#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int roll;
    int fee;
    public:
    Student(string n,int r,int f){
        name=n;
        roll=r;
        fee=f;
    }
    //User defined copy constructor
    //copy all means compiler do this all->create the copy constructor

    
    Student( Student & source1) {
       name=source1.name;
       roll=source1.roll;
    }
   
    void display(){
        cout << name << " " << roll << " " << fee << endl;
    }
    void setfees(int f){
fee=f;
    }
};
int main(){
    Student student1("Alice",18,190000);
    Student student2=student1;
    Student student3=student2;
  student2.setfees(55445450);
  student1.setfees(666666);
  student3.setfees(9723325);


    student1.display();
    student2.display();
    student3.display();
    
    return 0;
}