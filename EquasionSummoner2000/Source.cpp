#include <iostream>
#include "Windows.h"
using namespace std;

//Master equasion:
    //cout << "y = " << rightFrac << "(x - " << x1 << ") + " << y1 << endl;
//rightFrac omitted:
    //cout << "y = (x - " << x1 << ") + " << y1 << endl;
//y1 omitted:
    //cout << "y = " << rightFrac << "(x - " << x1 << ")" << endl;

int main()
{
    double x1, x2, y1, y2;
    double rightFrac;

    cin >> x1 >> y1 >> x2 >> y2;

    rightFrac = (y2 - y1) / (x2 - x1); 

    cout << "y = ";
    if (rightFrac != 1) cout << rightFrac;

    if (x1 < 0) cout << "(x + " << abs(x1) << ")";
    else if (x1 == 0) cout << "x";
    else cout << "(x - " << x1 << ")";

    if (y1 == 0) cout << " " << endl;
    else if (y1 < 0) cout << " - " << y1 << endl;
    else cout << " + " << y1 << endl;


    system("PAUSE");


    return 0;
}
