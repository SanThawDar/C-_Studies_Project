/*
Container Class: A class containing objects of other classes.
*/

#include <iostream>


class Person{
    public:
        Person(){
            std::cout <<"This is a constructor named by Person constructor." << std::endl;
        }
        ~Person(){
            std::cout <<"This is a destructor named by Person destructor." << std::endl;
        }
};


class Example{
    public:
        static Person p1; // 'static' keyword: means allocate when the program starts and deallocate when the program ends.
        Person p2;
};

// Definition of the static member variable
Person Example::p1;

int main(){
    Example obj;
    // Access static member via class name
    Example::p1;
    // Access non-static member via object
    obj.p2;

    return 0;
}
