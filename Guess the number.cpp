// Guess the number game.
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main()
{
int inputNumber;
int randomNumber;
int score = 0;

	srand(time(NULL));

	randomNumber = rand() % 10 + 1; //change numbers

	do {
		cout << "Enter your guess (1-10): " << endl;
		cin >> inputNumber;

		if (inputNumber > randomNumber) {
			cout << "Lower! \n";
		}
		else if (inputNumber < randomNumber) {
			cout << "Higher \n";
		}
		else {
			cout << "You got the number, congratulations! \n";
		}
		score++;

	} while (randomNumber != inputNumber);

	cout << "The number was: " << randomNumber << endl;
	cout << "It took you " << score << " guesses!" << endl;
	
	return 0;
}

