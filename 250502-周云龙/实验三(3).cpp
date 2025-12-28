#include<iostream>
#include<iomanip>
#include "mytemperature.h"
using namespace std;
int main() {
	cout << fixed << setprecision(2);
	cout << left;
	cout << setw(12) << "Celsius"
		<< setw(12) << "Fahrenheit"
		<< "|   "
		<< setw(15) << "Fahrenheit"
		<< setw(12) << "Celsius" << endl;

	double fah = 120.0;
	double cel = 40.0;
	while (cel >= 31.0 && fah >= 30.0) {
		double result_fah = celsius_to_fah(cel);
		double result_cel = fahrenheit_to_cels(fah);
		cout << setw(12) << cel
			<< setw(12) << result_fah
			<< "|   ";

		cout << setw(15) << fah
			<< setw(12) <<result_cel << endl;
		cel -= 1.0;
		fah -= 10.0;
	}return 0;
}