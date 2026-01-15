#include <iostream>
using namespace std;

int main()
{

    int bill;
    int unit;
    cout << "=========ELECTRICITY BILL CALCULATOR==========" << endl;
    cout << "Enter Units of Electricity consumed: ";
    cin >> unit;
    if (unit <= 100)
    {
        bill = 2 * unit;
    }

    else if (unit > 100 && unit <= 200)
    {
        bill = 3 * unit;
    }

    else if (unit > 200)
    {
        bill = 5 * unit;
    }

    else
    {
        cout << "Enter a valid unit !!" << endl;
    }

    // surcharge condition

    if (bill > 1000)
    {
        bill = bill + (bill * 0.10);
    }

    cout << "The total electricity bill is: Rs " << bill << endl;

    return 0;
}