#include <iostream>
using namespace std;

class AbstractShape {
public:
    virtual void draw() = 0; // Pure virtual function makes this class abstract
};

class Circle : public AbstractShape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Circle circle;  // Creating an instance of Circle
    circle.draw();  // Calling the draw method on the Circle instance

    return 0;
}
