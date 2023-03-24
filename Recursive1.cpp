// Use recursive and find, if a selected number is present within an added number

#include <cstdlib>
#include <iostream>

using namespace std;

bool presentNum(int num, int selectedNum)
{
    if (num > 0) {
        if (num % 10 == selectedNum) return true;
        presentNum(num / 10, selectedNum);
    }
    else return false;
}

int main() 
{   // in presentNum first put a random number, then the number you wish to find

    cout << presentNum(586, 5) << endl;

    // When there is time, make it user friendly(Type stuff in the console)
    return 0;
}