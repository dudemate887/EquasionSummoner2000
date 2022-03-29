#include <iostream>
#include "Windows.h"
using namespace std;

int main()
{
    double x1, x2, y1, y2;
    double rightFrac;

    cin >> x1 >> y1 >> x2 >> y2;

    rightFrac = (y2 - y1) / (x2 - x1);

    cout << "y = " << rightFrac << "(x - " << x1 << ") + " << y1 << endl;

    system("PAUSE");


    return 0;
}
