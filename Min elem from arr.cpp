//Find the smallest number of an arrary and it's position

#include <iostream>
#include <cstdlib>

using namespace std;

double arr[25];

void input(int num)
{
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
}

int minNum(int num)
{
    int numPos;
    double min;
    min = arr[0];
    numPos = 0;

    for (int i = 1; i < num; i++)
        if (min > arr[i])
        {
            min = arr[i];
            numPos = i;
        }
    return numPos;
}

int main()
{
    int num, i;

    cout << "Number of elements(max 25):\n";
    cin >> num;

    cout << "Add the array numbers:\n";
    input(num);
    i = minNum(num);

    //optional: good to add + 1 so the minimum position starts at 1
    cout << "Position: " << i + 1  << " || Number: " << arr[i] << endl;
    
    return 0;
}