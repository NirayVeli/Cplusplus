#include <cstdlib>
#include <iostream>

using namespace std;

void dividers(int num)
{
    int i;

    for (i = 1; i <= num; i++)
    {
        if ((num % i) == 0)
            cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    int num;
    cout << "Input" << endl;
    cin >> num;

    dividers(num);

    return 0;
}
    /* Good way to see All the number up to the input
     (clever way i guess(thanks google :D ))
     
    int i;

    for (i = 1; i <= num; i++) {
        cout << i << '-->';
        dividers(i);
    }
    */