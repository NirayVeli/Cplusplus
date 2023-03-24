#include<iostream>
#include<math.h>
using namespace std;

int main() {

	int sNumber1;
	int sNumber2;
	int sResult;
	double cNumber1;
	double cNumber2;
	double cResult;
	int typeOfcalc;
	int typeOfoperation;
	bool repeater = true;

	cout << "Choose type of calculation: \n" << "1. Simple numbers \n"<<"2. Complex numbers" << endl;
	cin >> typeOfcalc;
	while (repeater) {

		switch (typeOfcalc) {
		case 1:
			cout << "You have chosen simple numbers.\n";
			cout << "Enter Number 1: \n";
			cin >> sNumber1;
			cout << "Enter Number 2: \n";
			cin >> sNumber2;
			cout << "Choose an operation: \n";
			cout << "1. Addition (+)\n" << "2. Substraction (-) \n" << "3. Multiplication (*)\n" << "4. Division (/)\n";

			cin >> typeOfoperation;

			switch (typeOfoperation) {
			case 1:
				sResult = sNumber1 + sNumber2;
				break;
			case 2:
				sResult = sNumber1 - sNumber2;
				break;
			case 3:
				sResult = sNumber1 * sNumber2;
				break;
			case 4:
				sResult = sNumber1 / sNumber2;
				break;
			default: cout << "Type valid operation! \n";
			}
			cout << "The answer is: " << sResult << endl;

			repeater = false;
			break;
			
		case 2:
			cout << "You have chosen complex numbers.\n";
			cout << "Enter Number 1: \n";
			cin >> cNumber1;
			cout << "Enter Number 2: \n";
			cin >> cNumber2;
			cout << "Choose an operation: \n";
			cout << "1. Addition \n" << "2. Substraction \n" << "3.Multiplication \n" << "4. Division \n";

			cin >> typeOfoperation;
			switch (typeOfoperation) {
			case 1:
				cResult = cNumber1 + cNumber2;
				break;
			case 2:
				cResult = cNumber1 - cNumber2;
				break;
			case 3:
				cResult = cNumber1 * cNumber2;
				break;
			case 4:
				cResult = cNumber1 / cNumber2;
				break;
			default: cout << "Type valid operation! \n";
			}
			cout << "The answer is: " << cResult << endl;

			repeater = false;
			break;

		default:
			cout << "Choose between Simple or Complex numbers! \n";
			cin >> typeOfcalc;
			repeater = true;
		}
	}
return 0;
}