#include <iostream>
using namespace std;


class Animal{
    public:
        void eat(){
            cout <<"This animal eats food "<< endl;
        }
};

class Dog: public Animal{
    public:
        void bark(){
            cout<<"The dog barks"<<endl;

        }
};

int main(){
    Dog mydog;
    mydog.eat(); //Inherited from animal
    mydog.bark();
    return 0;
}