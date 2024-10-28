#include <iostream>
#include <cstdlib>
using namespace std;

class Temperature {
	private:
		double degreesKelvin,
		       degreesFahrenheit,
		       degreesCelsius;

	public:
		// Kelvin mutator and accessor functions
		void setTempKelvin(double kelvin);
		double getTempKelvin();

		// Celsius mutator and accessor functions
		void setTempCelsius();
		double getTempCelsius();

		// Fahrenheit mutator and accessor function
		void setTempFahrenheit();
		double getTempFahrenheit();
};

int main() {
	Temperature temp1;
	double myTemp;

	// Prompts user to enter a value
	cout << "\n";
	cout << "Enter a temperature in Kelvin: "; 
	cin >> myTemp;
	cout << endl;

	// Will exit the code if an invalid temperature is entered
	if (myTemp < 0) {
		cout << "Invalid temperature entered.";
		exit(1);
	}

	// Function calls to convert and set the temperatures
	temp1.setTempKelvin(myTemp);
	temp1.setTempCelsius();
	temp1.setTempFahrenheit();

	cout << "Temperature Conversions:" << endl;
	cout << "Kelvin: " << temp1.getTempKelvin() << "K"<< endl;
	cout << "Celsius: " << temp1.getTempCelsius() << "C" << endl;
	cout << "Fahrenheit: " << temp1.getTempFahrenheit() << "F" << endl;
	cout << "\n";

    return 0;
}

// Accessor functions
double Temperature::getTempKelvin() {
	return degreesKelvin;
}

double Temperature::getTempCelsius() {
	return degreesCelsius;
}

double Temperature::getTempFahrenheit() {
	return degreesFahrenheit;
}

// Mutator functions
void Temperature::setTempKelvin(double kelvin) {
	degreesKelvin = kelvin;
}

void Temperature::setTempCelsius() {
	degreesCelsius = degreesKelvin - 273.15;
}

void Temperature::setTempFahrenheit() {
	degreesFahrenheit = (9.0 / 5) * degreesCelsius + 32;
}
