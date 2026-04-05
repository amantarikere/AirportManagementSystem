#include <iostream>
using namespace std;

class Airport {
    int airport_id;
    char airport_name[30], location[30];

public:
    void inputAirportDetails() {
        cout << "Enter Airport ID: ";
        cin >> airport_id;
        cout << "Enter Airport Name: ";
        cin >> airport_name;
        cout << "Enter Location: ";
        cin >> location;
    }

    void displayAirport() {
        cout << "\nAirport ID: " << airport_id;
        cout << "\nAirport Name: " << airport_name;
        cout << "\nLocation: " << location;
    }
};

class Flight : public Airport {
    int flight_id;
    char flight_name[30], departure[30], arrival[30];
    int departure_time, arrival_time;

public:
    void inputFlightDetails() {
        cout << "Enter Flight ID: ";
        cin >> flight_id;
        cout << "Enter Flight Name: ";
        cin >> flight_name;
        cout << "Enter Departure: ";
        cin >> departure;
        cout << "Enter Arrival: ";
        cin >> arrival;
        cout << "Enter Departure Time (HHMM): ";
        cin >> departure_time;
        cout << "Enter Arrival Time (HHMM): ";
        cin >> arrival_time;
    }

    void displayFlight() {
        cout << "\nFlight ID: " << flight_id;
        cout << "\nFlight Name: " << flight_name;
        cout << "\nDeparture: " << departure;
        cout << "\nArrival: " << arrival;
        cout << "\nDeparture Time: " << departure_time;
        cout << "\nArrival Time: " << arrival_time;
    }
};

class Passenger : public Flight {
    int passenger_id;
    char passenger_name[30], email[30];
    int phone_number;

public:
    void inputPassengerDetails() {
        cout << "Enter Passenger ID: ";
        cin >> passenger_id;
        cout << "Enter Passenger Name: ";
        cin >> passenger_name;
        cout << "Enter Email: ";
        cin >> email;
        cout << "Enter Phone Number: ";
        cin >> phone_number;
    }

    void displayPassenger() {
        cout << "\nPassenger ID: " << passenger_id;
        cout << "\nPassenger Name: " << passenger_name;
        cout << "\nEmail: " << email;
        cout << "\nPhone Number: " << phone_number;
    }
};

int main() {
    Passenger passengers[5];
    int count = 0, choice;

    do {
        cout << "\nMenu:\n1. Add Passenger\n2. Display All Passengers\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < 5) {
                    cout << "\nEnter details for passenger " << count + 1 << "\n";
                    passengers[count].inputAirportDetails();
                    passengers[count].inputFlightDetails();
                    passengers[count].inputPassengerDetails();
                    count++;
                } else {
                    cout << "\nMaximum passenger limit reached!\n";
                }
                break;

            case 2:
                for (int i = 0; i < count; i++) {
                    cout << "\nDetails of Passenger " << i + 1 << "\n";
                    passengers[i].displayAirport();
                    passengers[i].displayFlight();
                    passengers[i].displayPassenger();
                    cout << "\n-----------------------\n";
                }
                break;

            case 3:
                cout << "Exiting program...";
                break;

            default:
                cout << "Invalid choice, please try again!";
        }
    } while (choice != 3);

    return 0;
}

