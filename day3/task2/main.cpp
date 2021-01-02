#include <iostream>
using namespace std;

class Triangle
{
    double dim1;
    double dim2;

public:
     Triangle(double _dim1=0, double _dim2=0)
    {
        dim1=_dim1;
        dim2=_dim2;
        cout<<"\n constructor \n";

    }

    double getDim1()
    {
        return dim1;
    }

    double getDim2()
    {
        return dim2;
    }

    void setDim1(double _dim1)
    {
        dim1=_dim1;
    }

    void setDim2(double _dim2)
    {
        dim2=_dim2;
    }


    ~Triangle()
    {
        cout<<"\n destructor \n";
    }

    double calcArea(double _dim1,double _dim2)
    {
        return .5*_dim1*_dim2;
    }
};

class Rectangle
{
    double dim1;
    double dim2;

public:
      Rectangle(double _dim1=0, double _dim2=0)
    {
        dim1=_dim1;
        dim2=_dim2;
        cout<<"\n constructor \n";

    }


    double getDim1()
    {
        return dim1;
    }

    double getDim2()
    {
        return dim2;
    }

    void setDim1(double _dim1)
    {
        dim1=_dim1;
    }

    void setDim2(double _dim2)
    {
        dim2=_dim2;
    }

    ~Rectangle()
    {
        cout<<"\n destructor \n";
    }

    double calcArea(double _dim1,double _dim2)
    {
        return _dim1*_dim2;
    }
};

int main()
{
    Triangle tria;

    double hight,width,res;

    cout<<"height of triangle: ";
    cin>>hight;

    cout<<"base of triangle: ";
    cin>>width;

    cout<<"the Area of the Triangle is : ";
    res=tria.calcArea(hight,width);

    cout<<res;

    Rectangle rect;
    double height2,width2,result;
    cout<<"\n height of rectangle: ";
    cin>>height2;
    cout<<"width of rectangle: ";
    cin>>width2;
    cout<<"the Area of the rectangle is : ";
    result=rect.calcArea(height2,width2);
    cout<<result;

    return 0;
}
