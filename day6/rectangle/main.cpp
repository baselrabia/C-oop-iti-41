#include <iostream>
#include<graphics.h>

using namespace std;


class point
{
 int x;
 int y;

 public:
    point(){
        x = y = 1;
    }
     point(int _x){
        x = _x;
        y = 1;
    }
     point(int _x =0,int _y =0){
        x = _x;
        y = _y;
    }

    void setX(int _x){
        x = _x;
    }
    void setY(int _y){
         y = _y;
    }

    void setPoint(int _x,int _y){
        x = _x;
        y = _y;
    }

    int getX(){return x;}
    int getY(){return y;}

    void print()
    {
        cout << "("<<x<<","<<y<<")"<<endl;
    }
     ~point()
    {
        cout << "\n point destractor \n "<<endl;
    }


};

class rectanglet
{
    point ul,lr;
    int c;
public:
    rectanglet(int x1,int y1,int x2,int y2,int _c):ul(x1,y1),lr(x2,y2)
    {
        //ul.setPoint(x1,y1);
        //lr.setPoint(x2,y2);
        c= _c;
    }
    rectanglet(int x1,int y1,int x2,int y2):ul(x1,y1),lr(x2,y2)
    {
        //ul.setPoint(x1,y1);
        //lr.setPoint(x2,y2);
        c= 7;
    }

    rectanglet(point& p1, point& p2,int _c=7):ul(p1),lr(p2)
    {
        c= _c;
    }

    int setColor(int _c)
    {
        c= _c;
    }

    void setUl(int x,int y){
        ul.setPoint(x,y);
    }

    void setUl(point p){
      ul=p;
    }

    void setLR(int x,int y){
       lr.setPoint(x,y);
    }

    void setLR(point p){
      lr=p;
    }



    void print(){
        ul.print();
        lr.print();
        cout<<"color="<<c<<endl;
    }

    draw(){
        setColor(c);
        rectangle(ul.getX(),ul.getY(),lr.getX(),lr.getY());
    }


     ~rectanglet()
    {
        cout << "\n rectanglet destractor \n "<<endl;
    }

};


class circlet
{
    point p;
    int r;
    int c;

public:
    circlet(int x,int y,int _r,int _c):p(x,y)
    {
        //p.setPoint(x,y);
        r= _r;
        c= _c;
    }

    circlet(point& p1,int _r,int _c):p(p1)
    {
        //p.setPoint(x,y);
        r= _r;
        c= _c;
    }

    circlet(int x,int y,int _r):p(x,y)
    {
        r= _r;
        c= 7;
    }

    circlet(point& p1,int _r):p(p1)
    {
        r= _r;
        c= 7;
    }

    int setColor(int _c)
    {
        c= _c;
    }

    int setR(int _r)
    {
        r= _r;
    }

    int getC(){return c;}
    int getR(){return r;}


    void setP(int x,int y){
        p.setPoint(x,y);
    }

    void setP(point p1){
      p=p1;
    }



    void print(){
        cout<<"center="<<endl;
        p.print();
        cout<<"radius="<<r<<endl;
        cout<<"color="<<c<<endl;
    }

    draw(){
        setColor(c);
        circle(p.getX(),p.getY(),getR());
    }


     ~circlet()
    {
        cout << "\n circle destractor \n "<<endl;
    }

};


class traianglet
{
    point p1,p2,p3;
    int r;
    int c;

public:
    traianglet(int x1,int y1,int x2,int y2,int x3,int y3,int _c):p1(x1,y1),p2(x2,y2),p3(x3,y3)
    {
        //p.setPoint(x,y);
        c= _c;
    }

    traianglet(point& _p1,point& _p2,point& _p3,int _c):p1(_p1),p2(_p2),p3(_p3)
    {
        //p.setPoint(x,y);
        c= _c;
    }

   traianglet(int x1,int y1,int x2,int y2,int x3,int y3):p1(x1,y1),p2(x2,y2),p3(x3,y3)
    {
        //p.setPoint(x,y);
        c= 7;
    }

    traianglet(point& _p1,point& _p2,point& _p3):p1(_p1),p2(_p2),p3(_p3)
    {
        //p.setPoint(x,y);
        c= 7;
    }

    int setColor(int _c)
    {
        c= _c;
    }


    int getC(){return c;}


    void setP1(int x,int y){
        p1.setPoint(x,y);
    }

    void setP1(point _p1){
      p1=_p1;
    }





    void print(){
        cout<<"points="<<endl;
        p1.print();
        p2.print();
        p3.print();
        cout<<"color="<<c<<endl;
    }

    draw(){
        setColor(c);

        line(p1.getX(),p1.getY(),p2.getX(),p2.getY());
        line(p2.getX(),p2.getY(),p3.getX(),p3.getY());
        line(p3.getX(),p3.getY(),p1.getX(),p1.getY());
    }


     ~traianglet()
    {
        cout << "\n traianglet destractor \n "<<endl;
    }

};



void rectangleFun(){
    rectanglet r1(10,20,30,40);
    rectanglet r2(110,210,310,410,5);

    r1.draw();
    r2.draw();
}

void circleFun(){
    circlet c1(40,80,30,4);
    circlet c2(100,200,30,4);

    c1.draw();
    c2.draw();
}

void traiangleFun(){
    traianglet t1(150,150,300,300,450,150);
    traianglet t2(90,90,30,90,60,60);

    t1.draw();
    t2.draw();
}

int main()
{
    //cout << "Hello world!" << endl;
    //point p1(10);
    //p1.print();

   int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "d:\\tc\\bgi");

    rectangleFun();
    traiangleFun();
    circleFun();
    //rectangle(100,100,300,300);

   // r2.print();

   getch();
   closegraph();

    return 0;
}
