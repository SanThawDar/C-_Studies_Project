/*
The bundling of data (variables) and methods (functions) that operate on the data into single unit(class). It restricts direct access to some of the object's components,
which can prevent the accident modification of data.
*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }

    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 10);
    cout << "Area: " << rect.getArea() << endl;

    return 0;
}
