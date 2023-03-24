//Input numbers and seperate them between positive and negative

#include <cstdlib>
#include <iostream>
using namespace std;

const int maxNum = 30;
int head = 0; //Top
int tail = 0; //Bottom
int s[maxNum]; //Array for storage

void inArr()
{
    head = 0;
    tail = 0;
    for (int i = 0; i <= maxNum; i++) s[i] = 0;
}

// Optional: Add a check to see if the Queue(opashka) is full or empty

bool isFull() {
    return ((tail + 1) % maxNum) == head;
}

bool isEmpty() {
    return head == tail;
}

bool inputQ(int X)
{
    bool inputCheck = !isFull();
    if (inputCheck) {
        s[tail] = X;
        tail++;
        tail %= maxNum;
    }
    return inputCheck;
}

// Extract from queue
bool extract(int& X)
{
    bool extractCheck = !isEmpty();
    if (extractCheck) {
        X = s[head];
        head++;
        head %= maxNum;
    }
    return extractCheck;
}

int main()
{
    inArr();
    int N, chislo;

    cout << "Input max numbers: " << endl;
    cin >> N;

        for (int i = 0; i < N; i++)
        {
            cout << "Add number: " << endl;
            cin >> chislo;
            inputQ(chislo);
        }

    //Print Positive Numbers
        cout << "Positive: " << endl;
        for (int i = 0; i < N; i++) 
        {
            extract(chislo);
            if (chislo > 0)
                cout << chislo << endl;
            else inputQ(chislo);
        }

    //Print Negative Numbers
        cout << "Negative: " << endl;
        while (!isEmpty())
        {
            extract(chislo);
            cout << chislo << endl;
        }
        cout << endl;

    return 0;
}