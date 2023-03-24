// Average temperature of Spring, Summer, Autumn, Winter and all year round.

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int jan, feb, mar, apr, may, june, july, aug, sep, oct, nov, dec;

    cout << "Add each month's temperature: \n";
    cout << "January: ";
    cin >> jan;
    cout << endl;

    cout << "February: ";
    cin >> feb;
    cout << endl;

    cout << "March: ";
    cin >> mar;
    cout << endl;

    cout << "April: ";
    cin >> apr;
    cout << endl;

    cout << "May: ";
    cin >> may;
    cout << endl;

    cout << "June: ";
    cin >> june;
    cout << endl;

    cout << "July: ";
    cin >> july;
    cout << endl;

    cout << "August: ";
    cin >> aug;
    cout << endl;

    cout << "September: ";
    cin >> sep;
    cout << endl;

    cout << "October: ";
    cin >> oct;
    cout << endl;

    cout << "November: ";
    cin >> nov;
    cout << endl;

    cout << "December: ";
    cin >> dec;
    cout << endl;

    cout << "Spring avg temp: ";
    cout << ((mar + apr + may) / 3) << endl;

    cout << "Summer avg temp: ";
    cout << ((june + july + aug) / 3) << endl;

    cout << "Autumn avg temp: ";
    cout << ((sep + oct + nov) / 3) << endl;

    cout << "Winter avg temp e: ";
    cout << ((dec + jan + feb) / 3) << endl;

    cout << "Average temperature of the year is ";
    cout << ((jan + feb + mar + apr + may + june + july + aug + sep + oct + nov + dec) / 12);
    cout << " Degrees" << endl;
    return 0;
}