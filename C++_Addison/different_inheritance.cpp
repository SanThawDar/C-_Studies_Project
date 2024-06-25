/*
Generally, it has five inheritance, which are single, multiple, multilevel, hierarchical, and hybrid.
*/

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual double area() const = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor
};

class Animal {
public:
    virtual void speak() const {
        cout << "Animal speaks" << endl;
    }
    
    void eat() const {
        cout << "Animal eats" << endl;
    }
    
    virtual ~Animal() {} // Virtual destructor
};
