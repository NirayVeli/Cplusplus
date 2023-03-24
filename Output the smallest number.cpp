// example: 835 ---> cout: 3
// use only if()
#include <iostream>

using namespace std;

int main() {

	int number;
	cout << "Number(100-999): ";
	cin >> number;

	int n1 = number % 10; // 258 --> 8
	int n2 = number / 10 % 10; // 258 --> 5
	int n3 = number / 100; // 258 --> 2

	int smallestNumber = n3;

	if (smallestNumber > n2) {
		smallestNumber = n2;
		}

	if (smallestNumber > n1) {
		smallestNumber = n1;
	}
	cout << "Smallest number is: \a"<<smallestNumber<<endl;

	// found that \a --> makes sound(nice)

	return 0;
}