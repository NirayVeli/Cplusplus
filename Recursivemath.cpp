// num^grad (grad>0) , (BG: stepenuvane)

#include <cstdlib>
#include <iostream>

using namespace std;

int gradation(int num, int grad)
{
    if (grad > 0) {
        return num * gradation(num, grad - 1);
    }
    else return 1;
}

int main() 
{   //grad = stepen na chislo
    int num, grad;

    cout << "Number: ";
    cin >> num;
    cout << endl;

    cout << "Graduate with: ";
    cin >> grad;
    cout << endl;

    cout <<"Answer: " << gradation(num, grad);

    return 0;
}