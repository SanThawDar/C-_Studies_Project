#include <iostream>
using namespace std;

class  Shape
{
private:
    virtual void draw(){
        cout << "Drawing Shape "<<endl;
    }
};

class Circle: public Shape{
    public:
        void draw() override{
            cout << "Drawing circle "<< endl;
        }
};

class Rectangle: public Shape{
    public:
        void draw() override{
            cout<< "Drawing Rectangle"<<endl;

        }
};

int main(){
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1 -> draw(); // Outputs: Drawing circle
    shape2 -> draw(); // Outputs: Drawing Rectangle

    delete shape1;
    delete shape2;


    return 0;
}
