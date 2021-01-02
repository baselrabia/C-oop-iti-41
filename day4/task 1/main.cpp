#include <iostream>

using namespace std;

class Stack {
        int tos;
        int* arr;
        int size;


    public:

        Stack(int s) {       // Constructor
            cout <<" stack Constructor \n\n";

            tos = -1;
            size = s;
            arr = new int[s];
        }

        ~Stack() {          // Destructor
            cout <<"\n stack Destructor \n";
            delete[] arr;

        }

        Stack(Stack& obj) {
            cout <<" stack Copy Constructor \n\n";

            tos= obj.tos;
            size= obj.size;
            arr= new int[size];

            for(int i=0; i<=tos; i++){
                arr[i]= obj.arr[i];
            }

        }


        int push(int d) {

            if (tos < size-1){
                tos++;
                arr[tos] =d;
            }
             else
                cout <<"Error: stack Full\n";
        }

        int pop() {

            if (tos == -1){
                cout <<"Error: stack empty\n";
            }
            else{
                int d = arr[tos];
                tos--;
                return d;
            }

        }

        int isempty(){
            return tos==-1;
        }

        void view(){

            for(int i=0; i<=tos; i++){
                cout<<"stack data"<< i+1 <<"\n";
                cout<<arr[i]<<endl;
            }
        }


};

void viewcontent(Stack s){

    s.view();

}
void viewcontent2(Stack* s){

    s->view();

}
void viewcontent3(Stack& s){

    s.view();

}


int main()
{

    Stack s1(5);

    s1.push(10);

    s1.push(20);

    Stack s2(s1);

    s1.push(30);

    s2.push(40);


    //viewcontent(s1);

    //viewcontent2(&s1);

    viewcontent3(s1);


    /*
    s1.isempty();
    s1.pop();

    s1.isempty();
    s1.pop();

    s1.isempty();
    s1.pop();
    */

    return 0;
}
