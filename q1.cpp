#include <iostream>
#include <cstdlib>
using namespace std;

// Declares a global constant double variable for the rate that gas is pumped
const double GAS_PER_SECOND = 0.1;

// Declares the gas pump object
class GasPump {

    public:  
        // Function reads in the values to the class
        void getValues();

        // Functions to set the variables
        double setPricePerGal();
        double setTimePumped();
        double setGasPumped(); 
        double setGasCost();

        // Function show the values
        void showPricePerGal();
        void showPrice();
        void showGasPumped();

        // Tracks and resets pump values
        void resetPump();

    private: 
        // Declares the class variables for the time gas is pumped and the cost per gallon of gas
        double seconds;
        double gasPrice;

        // Declares variables to track the gas pumped per transaction and the total amount of gas pumped
        double gasPumped;

        // Declares variables to track the cost per transaction and the total cost of gas from the pump
        double gasCost;
};

int main() {

    GasPump pump;
    
    // Reads in the values
    cout << "\n";
    pump.getValues();
    cout << "\n";

    // Sets the variables
    pump.setPricePerGal();
    pump.setTimePumped();
    pump.setGasPumped();
    pump.setGasCost();
    
    // Displays the transaction
    pump.showPricePerGal();
    pump.showGasPumped();
    pump.showPrice();
    cout << "\n"; 

    // Resets pump for the next user
    pump.resetPump();

    return 0;
}

// Function definition, gets values from the user
void GasPump::getValues() {
    // Reads in the gas price
    cout << "Enter the price per gallon: ";
    cin >> gasPrice;

    // Displays error message and exits if invalid price is entered
    if (gasPrice < 0) {
        cout << "Invalid price entered." << endl;
        exit(1);
    }

    // Reads in the time 
    cout << "Enter the time in seconds gas was pumped for: "; 
    cin >> seconds;

    // Displays error message and exits if invalid price is entered
    if (seconds < 0) {
        cout << "Invalid time entered." << endl;
        exit(1);
    }
}

// Function definition, sets the price per gallon
double GasPump::setPricePerGal() {
    return gasPrice;
}

// Function definition, sets the time gas was pumped for
double GasPump::setTimePumped() {
    return seconds;
}

// Function definition, sets the amount of gas pumped
double GasPump::setGasPumped() {
    gasPumped = seconds * GAS_PER_SECOND;
    return gasPumped;
}

// Function definition, sets the cost per order
double GasPump::setGasCost() {
    gasCost = gasPumped * gasPrice;
    return gasCost;
}

// Funtion definition, shows the price per gallon
void GasPump::showPricePerGal() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "One gallon of gas costs: $" << gasPrice << "." << endl;
}

// Function definition, shows the amount dispensed in gallons
void GasPump::showGasPumped() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << gasPumped << " gallons of gas dispensed." << endl;
}

// Function definition, shows the cost of the transaction
void GasPump::showPrice() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout <<  "The transaction amount is $" << gasCost  << "." << endl;
}

void GasPump::resetPump() {
    gasPumped = 0;
    gasCost = 0;
}
