# MaiVietThanh-24110129-OOPHomework-Weeks2
# Vehicle Management Program (C++ OOP)

### 👤 Author
- **Name**: Mai Viết Thành
- **Student ID**: 24110129
- **Last Update**: 05/09/2025

---

## 📌 Introduction
This project demonstrates **Object-Oriented Programming (OOP)** concepts in C++ through the implementation of a `Vehicle` class.  

The class models real-world vehicles with attributes (e.g., type, max speed, fuel type, year of manufacture, license plate, etc.) and behaviors (methods like `accelerate()` and `displayInfo()`).  

This program helps:
- Represent the typical attributes of vehicles.  
- Manage and display vehicle details in an organized way.  

It also shows how to:
- Encapsulate data in a class with private attributes and public methods.  
- Initialize objects using constructors.  
- Use file input/output (`input.txt`, `output.txt`) for testing.  

---

## ⚙️ Build & Run Instructions

### Compile
```bash
g++ Vehicle.cpp -o Vehicle
```

---

## 📥 Input Format
- There are three built-in examples in `main()`.  
- After that, the user can input additional vehicles.  

**Format:**
1. First line: number of vehicles `n`  
2. For each vehicle, input the following (each on a new line):  
   - type  
   - brandName  
   - registrationNumber  
   - modelYear  
   - weight  
   - color  
   - maxSpeed  
   - fuelType  

---

## 📝 Example Input (`input.txt`)
```

## 📥 Input Format
- There are three built-in examples in `main()`.  
- After that, the user can input additional vehicles.  

**Format:**
1. First line: number of vehicles `n`  
2. For each vehicle, input the following (each on a new line):  
   - type           // The type of the vehicle
   - maxSpeed      // Maximum speed of the vehicle
   - fuelType     // Type of fuel used
   - color       // Vehicle's color
   - usage      // Usage information (Time used)
   - mileage   // Total distance traveled in kilometers
   - YearOfManufacture  // Manufactured year
   - LicensePlate  // License plate number

---

## 📝 Example Input (`input.txt`)
```
5
Bus
120
Diesel
White
10 years
200000
2012
51B-99999

Bicycle
35
Human-power
Green
2 years
500
2021
XE-DAP-001

Electric Car
160
Electric
Black
1 year
12000
2023
29E-88888

Boat
80
Diesel
Blue
15 years
50000
2008
VN-BOAT-77

Helicopter
250
Kerosene
Red
7 years
3000
2015
HN-FLY-123

---

## 📤 Example Output
```
The Car is accelerating to 200 km/h.
The Truck is accelerating to 150 km/h.
The Motorcycle is accelerating to 180 km/h.
==============================
Vehicle type: Car
Max speed: 200 km/h
Fuel type: Gasoline
Color: Pink
Usage: 3 years
Mileage: 8000 km
Year of Manufacture: 2022
License Plate: 93E1-42219
==============================
==============================
Vehicle type: Truck
Max speed: 150 km/h
Fuel type: Diesel
Color: Blue
Usage: 5 years
Mileage: 50000 km
Year of Manufacture: 2018
License Plate: 36TH-36363
==============================
==============================
Vehicle type: Motorcycle
Max speed: 180 km/h
Fuel type: Gasoline
Color: Yellow
Usage: 1 years
Mileage: 8000 km
Year of Manufacture: 2022
License Plate: 59TD-11295
==============================
Input amounts vehicles you want: 
==============================
Vehicle type: Bus
Max speed: 120 km/h
Fuel type: Diesel
Color: White
Usage: 10 years
Mileage: 200000 km
Year of Manufacture: 2012
License Plate: 51B-99999
==============================
==============================
Vehicle type: Bicycle
Max speed: 35 km/h
Fuel type: Human-power
Color: Green
Usage: 2 years
Mileage: 500 km
Year of Manufacture: 2021
License Plate: XE-DAP-001
==============================
==============================
Vehicle type: Electric Car
Max speed: 160 km/h
Fuel type: Electric
Color: Black
Usage: 1 year
Mileage: 12000 km
Year of Manufacture: 2023
License Plate: 29E-88888
==============================
==============================
Vehicle type: Boat
Max speed: 80 km/h
Fuel type: Diesel
Color: Blue
Usage: 15 years
Mileage: 50000 km
Year of Manufacture: 2008
License Plate: VN-BOAT-77
==============================
==============================
Vehicle type: Helicopter
Max speed: 250 km/h
Fuel type: Kerosene
Color: Red
Usage: 7 years
Mileage: 3000 km
Year of Manufacture: 2015
License Plate: HN-FLY-123
==============================
```

---

## 💡 Reflection
When analyzing the requirements, I identified the main entity: a 'Vehicle' class representing real-world vehicles. The class encapsulates attributes such as type, maximum speed, fuel type, color, usage, mileage, year of manufacture, and license plate.

To implement behaviors, I added methods like `accelerate()` and `displayInfo()` to provide clients with useful information to support decision-making. 

**Challenges faced:**

- Handling input/output properly, especially mixing cin and getline.

- Managing multiple vehicles efficiently with vector<Vehicle>.

- Keeping code clean with CamelCase naming.

**How OOP helped:**

- Encapsulation: Hid the internal representation while exposing meaningful methods.

- Abstraction: Focused on what a vehicle does instead of how details are stored.

- Constructors: Simplified object creation by initializing attributes at once.

This project shows how OOP makes code **organized, reusable, and extendable.**

---
