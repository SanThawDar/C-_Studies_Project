#include <iostream>
using namespace  std;

class Example{
    private:
        int *ptr;
    public:
    // constructor 
    Example(int x){
        ptr = new int(x);
        cout << "Constructor called "<< endl;

    }

    //destructor
    
    ~Example(){
        delete ptr;
        cout << "Destructor called " <<endl;
    }

    void display()
    {
        cout << "Value : " << *ptr << endl;
    }

};

int main(){
    Example e1(10);
    e1.display();

    {
        Example e2(20);
        e2.display();
    } // Destructor called for e2 when going out of scope
    return 0;
}