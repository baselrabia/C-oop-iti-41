#include <iostream>
#include <cmath>        // std::abs

using namespace std;

struct Complex
{
    int real;
    int img;
};


void printc(struct Complex c);
Complex add( Complex x,Complex y);

int main()
{
    struct Complex c1={10,-20};
    struct Complex c2={20,30};

    printf("enter the real value then the imagine for the first complex number \n");
    cout<<"first complex\n";

    cout<<"enter real: ";
    cin>>c1.real;

    cout<<"enter imaginary: ";
    cin>>c1.img;

    printf("enter the real value then the imagine for the secand complex number \n");
    cout<<"Secand complex\n";

    cout<<"enter real: ";
    cin>>c2.real;

    cout<<"enter imaginary: ";
    cin>>c2.img;



    cout<<"complex number 1 + complex number 2 = ";


    Complex res =add(c1,c2);

    printc(res);

    return 0;
}


void printc(struct Complex c)
{
    if (c.img >= 0)
        printf("complex : %d + %dj \n", c.real, c.img);
    else
        printf("complex : %d - %dj \n", c.real, abs(c.img));

}

Complex add( Complex x,Complex y){
    Complex c;
    c.real = x.real + y.real;
    c.img = x.img + y.img;
    return c;
};
