#include <iostream>
using namespace std;

int main()
{
    int n1, n2, product,sum,division,sub;
    cout << "Enter two numbers: \n";

     cin >> n1 >> n2;

    sum = n1 + n2;
    sub = n1 - n2;
    product = n1 * n2;
    division = n1 / n2;

    cout << "\n sum = n1 + n2 = " << sum;
    cout << "\n sub = " << sub;
    cout << "\n product = " << product;
    cout << "\n division = " << division;

    return 0;
}
