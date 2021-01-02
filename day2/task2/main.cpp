#include <iostream>

int main()
{
    int x = 10;
    int &y = x;

    cout << "y = " << y << endl;

    y = 100;
    cout << "y = " << y << endl;
    cout << "x = " << x << endl;

    return 0;
}
