// Recursion - Output backwards (1234 --> 4321) || Output symetrical with the backwards(2467 7642)
#include <iostream>
#include <stdlib.h>

using namespace std;

void backwards(int num) {
    if (num != 0) {
        cout << num % 10;
        backwards(num / 10);
    }
}

void Symetrical(int num) {
    if (num != 0) {
        cout << num % 10;
        Symetrical(num / 10);
        cout << num % 10;
    }
    if (num == 0) cout << ' ';
}

int main()
{
    int num;
    cout << "Enter the number: \a \n"; //Added sound for effect xD
    cin >> num;

    backwards(num);
    cout << endl;
    Symetrical(num);

    return 0;
}