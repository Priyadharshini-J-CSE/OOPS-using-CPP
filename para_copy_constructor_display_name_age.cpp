#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    //parameterized constructor
    Person(string n,int a){
        name=n;
        age=a;
    }
    //Copy Constructor
    Person(const Person & source)
{
    name=source.name;

    age=source.age;
}
void display(){
    cout << name << age;
}
};
int main(){
Person person1("Alice",25);
Person person2=person1;
person1.display();
person2.display();
    return 0;
}