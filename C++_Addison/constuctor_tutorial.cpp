#include <iostream>
using namespace  std;

class Example
{
    private:
        int a,b;
    public:
    // Default Constructor
    Example(): a(0),b(0){
        cout <<"Default constructor called " <<endl;
    }

    //Parameterized Constructor
    Example(int x,int y): a(x),b(y){
        cout << "Parameterized constructor called " <<endl;
    }

    // Copy constructor
    Example(const Example &ex): a(ex.a), b(ex.b){
        cout << "Copy constructor called " << endl;
    }
    
    void display(){
        cout << "a : " << a << ", b : " << b << endl;
    }
} ;

int main()
{
    Example e1;
    Example e2(10,20);
    Example e3=e1;

    e1.display();
    e2.display();
    e3.display();

    return 0;
}