Airport Management System (C++)
 Description

The Airport Management System is a simple console-based application written in C++ that manages airport, flight, and passenger details using object-oriented programming concepts such as inheritance and classes.

This project demonstrates how multiple related entities (Airport → Flight → Passenger) can be structured in a hierarchical manner.
Features
Add passenger details
Store airport information
Manage flight details
Display all stored records
Menu-driven program
 OOP Concepts Used
Class & Objects
Inheritance (Multilevel)
Airport → Flight → Passenger
Encapsulation
Function Overloading (Input/Display methods)

 Project Structure
Airport-Management-System/
│
├── air2.cpp   // Main source code
├── README.md  // Project documentation
⚙️ How It Works
User selects options from menu:
Add Passenger
Display All Passengers
Exit
Program collects:
Airport details
Flight details
Passenger details
Stores data in an array (max 5 passengers)
Displays all stored information
 Technologies Used
Language: C++
Compiler: GCC / Turbo C++ / VS Code
 How to Run
g++ air2.cpp -o airport
./airport
 Sample Output
Menu:
1. Add Passenger
2. Display All Passengers
3. Exit
Enter your choice:
Limitations
Fixed passenger limit (5)
No file storage (data lost after program ends)
Uses basic char arrays instead of modern string
 Future Improvements
Use string instead of char arrays
Add file handling (save/load data)
Increase passenger capacity dynamically
Add GUI or database support
