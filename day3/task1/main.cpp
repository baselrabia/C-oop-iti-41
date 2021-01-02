#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;

public:

     Complex(int _real, int _img)
    {
        real=_real;
        imaginary=_img;
        cout<<"\n constructor \n";
    }

    int getReal()
    {
        return real;
    }

    int getImaginary()
    {
        return imaginary;
    }

    void setReal(int x)
    {
        real=x;
    }

    void setImaginary(int y)
    {
        imaginary=y;
    }



    ~Complex()
    {
        cout<<"\n destructor\n";
    }
};

int main()
{

    Complex c(10,20);
    cout<<"real= "<<c.getReal()<<" img= "<<c.getImaginary()<<endl;

    return 0;
}
