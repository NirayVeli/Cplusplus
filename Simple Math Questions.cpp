#include <iostream>
#include <cmath>

using namespace std;

int main() {

	//choose between [5,10) to exit true(1), otherwise false(0)

	int number;
	bool checker=true;

	cout << "Enter the number: ";
	cin >> number;

	if (number >= 5 && number < 10) {
		cout << checker;
	}
	else{
	checker = false;
	cout << checker;
	}

	return 0;
}