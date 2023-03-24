// example: 532 -> 5+3+2 = 10

#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int number;
	cout << "Number: ";
	cin >> number;
	while (number < 0 || number>1000) {
		cout << "Enter number between 1-999!" << endl;
		cin >> number;
	}
		int n1 = number % 10;
		int n2 = number / 10 % 10;
		int n3 = number / 100;
		cout << "Total: " << n1 + n2 + n3 << endl;

	return 0;
}
