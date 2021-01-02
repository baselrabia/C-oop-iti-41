#include <iostream>

using namespace std;

class Complex
{
    int real;
    int img;

    public:

    Complex(int _real =0,int _img =0){
        real = _real;
        img = _img;
    }

    Complex(Complex& c){
        real = c.real;
        img = c.img;
    }

    void setReal(int _real)
    {
        real = _real;
    }
    void setImg(int _img)
    {
        img = _img;
    }

     void setComplex(int _real,int _img)
    {
        real = _real;
        img = _img;
    }

    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }


    void add(Complex x,Complex y){
        real = x.real + y.real;
        img = x.img + y.img;
    }

    Complex add(Complex y){
        Complex res(real + y.real,img + y.img);
        return res;
    }

    void sub(Complex x,Complex y){
        real = x.real - y.real;
        img = x.img - y.img;
    }


    void print()
    {
        if (img >= 0)
            cout<<real<<"+"<<img<<"j\n";
        else
            cout<<real<<"-"<<abs(img)<<"j\n";
    }

    Complex operator+(Complex y)
    {
       Complex res(real + y.real,img + y.img);
        return res;
    }

    Complex operator+(int y)
    {
       Complex res(real + y, img);
        return res;
    }

     int operator==(Complex y)
    {
         return real == y.real && img == y.img;
    }

    friend Complex operator+(int r, Complex c);

     Complex operator++()
    {
        real++;
        return *this;
    }

     Complex operator++(int)
    {
       Complex x= *this;
       real++;
        return x;
    }




};

Complex operator+(int r, Complex c)
{
    Complex res(r+c.real, c.img);
    return res;
    //return c+r;
}

int main()
{
    int s,a,b;
    cin >> s;
    Complex* r = new Complex[s];

    for(int i=0; i<s ; i++)
    {
        cin>>a;
        cin>>b;
        r[i].setComplex(a,b);
    }

    delete r;






    return 0;
}
