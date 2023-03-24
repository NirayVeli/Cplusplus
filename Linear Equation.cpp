//Linear equation

#include <cstdlib>
#include <iostream>

using namespace std;

int linear(double a, double b, double& x) 
{
    if (a == 0)
        if (b == 0)
            return 3;  // every x is a solution
        else return 1; // no solution
    else {             // one solution
        x = -b / a;
        return x;
    }
}

int main()
{
    double a, b, x;

    cout << "Input a:" << endl;
    cin >> a;

    cout << "Input b:" << endl;
    cin >> b;

    int r = linear(a, b, x);

   if (r == 1)
        cout << "No answer" << endl;
    else if (r == 2)
        cout << "x = 0" << endl;
    else if (r == 3)
        cout << "every x is a solution" << endl;
    else cout << "Answer is: " << x << endl;
    
    return 0;
}
