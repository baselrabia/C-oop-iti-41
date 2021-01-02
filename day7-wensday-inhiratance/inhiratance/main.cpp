#include <iostream>

using namespace std;

class parent
{
protected:
    int x,y;
public:
    parent(){
      x=y=0;
        cout<<"parent constractor1"<<endl;
    }
    parent(int _x,int _y){
        x= _x;
        y= _y;
        cout<<"parent constractor2"<<endl;
    }
    void setX(int _x){
        x= _x;
    }

    void setY(int _y){
        y=_y;
    }

    print()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;

    }
    int add(){
        return x+y;
    }
};

class child:public parent
{

    int z;
public:
    child()
    {
        z=0;
        cout<<"child constractor1"<<endl;
    }
     child(int _x,int _y):parent(_x,_y)
    {
        //x= _x;
        //y= _y;
        z=0;
        cout<<"child constractor2"<<endl;
    }
    child(int _x,int _y,int _z):parent(_x,_y)
    {
        //x= _x;
        //y= _y;
        z=_z;
        cout<<"child constractor3"<<endl;
    }

    int addchild(){
        return parent::add()+z;
    }

};

int main()
{
    cout << "Hello world!" << endl;

    child c1(10,20,30);
            cout<<"add"<<endl<<c1.;

    c1.print();


    return 0;
}
