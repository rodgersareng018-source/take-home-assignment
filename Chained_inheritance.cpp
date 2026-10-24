#include <iostream>
#include <string>
using namespace std;

// Base Class
class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) : brand(b), year(y) {}

    void displayVehicleInfo() {
        cout << "Brand: " << brand << "\nYear: " << year << endl;
    }
};

// Intermediate Derived Class (Inherits from Vehicle)
class Car : public Vehicle {
protected:
    int seatingCapacity;

public:
    Car(string b, int y, int seats) : Vehicle(b, y), seatingCapacity(seats) {}

    void displayCarInfo() {
        displayVehicleInfo(); // Accessing base class member function
        cout << "Seating Capacity: " << seatingCapacity << " seats" << endl;
    }
};

// Leaf Derived Class (Inherits from Car, demonstrating Chained Inheritance)
class ElectricCar : public Car {
private:
    int batteryCapacityKWh;

public:
    ElectricCar(string b, int y, int seats, int battery) 
        : Car(b, y, seats), batteryCapacityKWh(battery) {}

    void displayElectricCarInfo() {
        displayCarInfo(); // Accessing intermediate class member function
        cout << "Battery Capacity: " << batteryCapacityKWh << " kWh" << endl;
    }
};

int main() {
    // Creating an object of the lowest derived class in the chain
    ElectricCar myElectricCar("Tesla Model S", 2026, 5, 100);

    cout << "--- Chained Inheritance Demonstration ---" << endl;
    myElectricCar.displayElectricCarInfo();

    return 0;
}