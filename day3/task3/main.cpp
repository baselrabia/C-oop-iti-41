#include <iostream>
using namespace std;

class Complex
{
    int real;
    int img;

public:

    Complex(int _real=0, int _img=0)
    {
        real=_real;
        img=_img;
        cout<<"\n constructor \n ";
    }

    int getReal()
    {
        return real;
    }

    int getImg()
    {
        return img;
    }

    void setReal(int x)
    {
        real=x;
    }

    void setImg(int y)
    {
        img=y;
    }

    ~Complex()
    {
        cout<<"\n destructor \n";
    }
};


void myfun()
{
    Complex c1;
}

void myfun(Complex x)
{
    Complex y;
    cout<<"\n from myFun \n" ;
}

void myfun2(Complex x)
{
    cout<<"\n from myFun2 \n";
}

int main()
{
    Complex c(10,20);

    myfun();
    myfun(c);
    myfun2(c);

    return 0;
}
