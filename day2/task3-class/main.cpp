#include <iostream>
#include <cmath>        // std::abs

using namespace std;



class complex
{
    int real;
    int img;

    public:

    void setReal(int _real)
    {
        real = _real;
    }
    void setImg(int _img)
    {
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


    void add(complex x,complex y){
        real = x.real + y.real;
        img = x.img + y.img;
    }

    void sub(complex x,complex y){
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

};

void printAlone(complex c);

int main()
{

    complex c1,c2,res;

    int real1,img1;
    int real2,img2;

    cout<<"first complex\n";

    cout<<"enter real: ";
    cin>>real1;
    c1.setReal(real1);

    cout<<"enter imaginary: ";
    cin>>img1;
    c1.setImg(img1);

    cout<<"second complex\n";

    cout<<"enter real: ";
    cin>>real2;
    c2.setReal(real2);

    cout<<"enter imaginary: ";
    cin>>img2;
    c2.setImg(img2);



    cout<<"Add => complex 1 + complex 2 = ";

    res.add(c1,c2);
    printAlone(res);


    cout<<"Sub => complex 1 - complex 2 = ";
    res.sub(c1,c2);
    printAlone(res);

    cout<<" stand-alone print\n";
    printAlone(res);


    cout<<" memberShip print \n";
    res.print();



    return 0;
}

void printAlone(complex c){

    if (c.getImg() >= 0)
            cout<<c.getReal()<<"+"<<c.getImg()<<"j\n";
        else
            cout<<c.getReal()<<"-"<<abs(c.getImg())<<"j\n";

}
