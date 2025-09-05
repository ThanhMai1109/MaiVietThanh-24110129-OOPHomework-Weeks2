/*
Name: Mai Viết Thành
Id:24110129
*/

/*
Reflection:

In this assignment, I modeled a real-world transportation fleet using OOP concepts.
The main entity was Vehicle with attributes like type, maxSpeed, fuelType, color,
mileage, and licensePlate. Its behaviors included accelerate(), honk(), and displayInfo().
At first, I struggled with constructor arguments and small syntax mistakes, but fixing
them improved my understanding of classes and objects in C++. OOP made the design clear:
encapsulation kept data safe, abstraction simplified actions, and reusability allowed
creating many vehicles. This exercise showed how theory maps directly into practical code.
*/

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;
class Vehicle
{
private:
    string type;           // The type of the vehicle
    double maxSpeed;       // Maximum speed of the vehicle
    string fuelType;       // Type of fuel used
    string color;          // Vehicle's color
    string usage;          // Usage information (Time used)
    double mileage;        // Total distance traveled in kilometers
    int YearOfManufacture; // Manufactured year
    string LicensePlate;   // License plate number

public:
    // Constructor
    Vehicle(string t, double mS, string fT, string c, string use, double mile, int yof, string lp)
    {
        type = t;
        maxSpeed = mS;
        fuelType = fT;
        color = c;
        usage = use;
        mileage = mile;
        YearOfManufacture = yof;
        LicensePlate = lp;
    }

    // Speed ​​is increasing notification
    void accelerate()
    {
        cout << "The " << type << " is accelerating to " << maxSpeed << " km/h." << endl;
    }

    // Getter
    string getType() { return type; }
    double getMaxSpeed() { return maxSpeed; }
    string getFuelType() { return fuelType; }
    string getColor() { return color; }
    string getUsage() { return usage; }
    double getMileage() { return mileage; }
    int getYearOfManufacture() { return YearOfManufacture; }
    string getLicensePlate() { return LicensePlate; }

    // Displays all information about the vehicle
    void displayInfo()
    {
        cout << "==============================" << endl;
        cout << "Vehicle type: " << type << endl;
        cout << "Max speed: " << maxSpeed << " km/h" << endl;
        cout << "Fuel type: " << fuelType << endl;
        cout << "Color: " << color << endl;
        cout << "Usage: " << usage << endl;
        cout << "Mileage: " << mileage << " km" << endl;
        cout << "Year of Manufacture: " << YearOfManufacture << endl;
        cout << "License Plate: " << LicensePlate << endl;
        cout << "==============================" << endl;
    }
};
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string type;           // The type of the vehicle
    double maxSpeed;       // Maximum speed of the vehicle
    string fuelType;       // Type of fuel used
    string color;          // Vehicle's color
    string usage;          // Usage information (Time used)
    double mileage;        // Total distance traveled in kilometers
    int YearOfManufacture; // Manufactured year
    string LicensePlate;

    // Create 3 Vehicle objects
    Vehicle car("Car", 200, "Gasoline", "Pink", "3 years", 8000, 2022, "93E1-42219");
    Vehicle truck("Truck", 150, "Diesel", "Blue", "5 years", 50000, 2018, "36TH-36363");
    Vehicle motorcycle("Motorcycle", 180, "Gasoline", "Yellow", "1 years", 8000, 2022, "59TD-11295");

    // Demonstrate behaviors
    car.accelerate();
    truck.accelerate();
    motorcycle.accelerate();

    // Display information of each vehicle
    car.displayInfo();
    truck.displayInfo();
    motorcycle.displayInfo();

    cout << "Input amounts vehicles you want: "<< endl;
    int n;
    cin >> n;

    vector<Vehicle> vehicle;
    for(int i=0;i<n;i++){
        cin.ignore(256, '\n');
        getline(cin, type);
        cin >> maxSpeed;
        cin.ignore(256, '\n');
        getline(cin, fuelType);
        getline(cin, color);
        getline(cin, usage);
        cin >> mileage;
        cin >> YearOfManufacture;
        cin.ignore(256, '\n');
        getline(cin, LicensePlate);

        Vehicle a(type, maxSpeed, fuelType, color, usage, mileage, YearOfManufacture, LicensePlate);
        vehicle.push_back(a);
    }

    for(auto x:vehicle){
        x.displayInfo();
    }
}