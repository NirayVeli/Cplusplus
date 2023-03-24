// Data of a working person
#include <iostream>

using namespace std;

char firstName[20];
char midName[20];
char lastName[20];
char job[50];
double payment;

int main() 
{
    cout << "First name: \n";
    cin >> firstName;

    cout << "Middle name: \n";
    cin >> midName;

    cout << "Last name: \n";
    cin >> lastName;

    cout << "Job: \n";
    cin >> job;

    cout << "Payment: \n";
    cin >> payment;

    cout << "Worker " << firstName << " " << midName << " " << lastName << " has a job of a " << job << " with a payment of: " << payment <<"$ \n";

    return 0;
}