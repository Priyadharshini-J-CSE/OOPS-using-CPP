#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;
    int speed;

public:
    // Default constructor
    Car() : make("Unknown"), model("Unknown"), year(0), speed(0) {}

    // Parameterized constructor
    Car(std::string mk, std::string mdl, int yr, int spd = 0)
        : make(mk), model(mdl), year(yr), speed(spd) {}

    // Copy constructor (creates a car object from another existing car)
    Car(const Car& other)
        : make(other.make), model(other.model), year(other.year), speed(other.speed) {}

    // Method to accelerate the car
    void accelerate(int increment) {
        speed += increment;
        std::cout << "The car is now moving at " << speed << " km/h." << std::endl;
    }

    // Method to brake the car (ensuring speed doesn't go below zero)
    void brake(int decrement) {
        speed = (speed - decrement < 0) ? 0 : speed - decrement;
        std::cout << "The car is now moving at " << speed << " km/h." << std::endl;
    }

    // Method to display car details
    void display() const {
        std::cout << "Car Details:\nMake: " << make << "\nModel: " << model
                  << "\nYear: " << year << "\nSpeed: " << speed << " km/h\n";
    }
};

int main() {
    // Creating objects using different constructors
    Car car1;  // Default constructor
    Car car2("Toyota", "Corolla", 2020);  // Parameterized constructor
    Car car3(car2);  // Copy constructor

    // Displaying car details
    car1.display();
    car2.display();
    car3.display();

    // Accelerating and braking car2
    car2.accelerate(20);
    car2.brake(10);
return 0;
}