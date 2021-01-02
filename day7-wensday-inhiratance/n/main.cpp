#include <iostream>

using namespace std;

    class Super
           {
                protected:
 	                         Super(int a)
                                   {
	                                  (*this).a = a;     // Line 1
                                   }
               //private:                                // Line 2
                               int a;
            };
           class Sub: public  Super
           {
                  public:
                                Sub(int a):Super(a)  { }
                  public:
                              Sub():Super(5)                   //Line 3
	                        {
                                (*this).a= 5;         //Line 4
                             }
           };

           int main (){

           Sub boy();
           }
