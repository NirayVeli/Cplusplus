// Sum up to the input number 3 --> 1+2+3

#include <cstdlib>
#include <iostream>

using namespace std;

int sum(int num)
{
    if (num == 1) return 1;
    return sum(num - 1) + num;
}
    //optional: add a check to see if the number > 0

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << endl;

    cout << "The sum is: " << sum(num) << endl << endl;

    return 0;
}
