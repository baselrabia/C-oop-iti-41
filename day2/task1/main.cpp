#include <iostream>

using namespace std;

void swap1(int x,int y);
void swap2(int* x,int* y);
void swap3(int& x,int& y);

int main()
{
    cout << "the start!" << endl;

    int x = 10;
    int y = 20;

    cout << "before : x = " << x << " and y = " << y << endl;

    swap1(x,y);

    printf("\n");
    cout << "after swap with value : x = " << x << " and y = " << y << endl;

    x = 10;
    y = 20;
    swap2(&x,&y);

    printf("\n");
    cout << "after swap with referance : x = " << x << " and y = " << y << endl;

    x = 10;
    y = 20;
    swap3(x,y);

    printf("\n");
    cout << "after swap with address : x = " << x << " and y = " << y << endl;


    return 0;
}

void swap1(int x,int y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
}

void swap2(int* x,int* y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}

void swap3(int& x,int& y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
}
