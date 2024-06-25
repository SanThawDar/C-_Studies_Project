/*
Classes and Objects:
    1. Class : A class defines a datatype by bundling data and methods that work on the data.
    2. Object : An instance of a class.
*/


#include <iostream>
using namespace std;

class Car{
public: 
    string brand;
    string model;
    int year;

    void displayInfo(){
        cout <<"Brand: " << brand <<", Model : "<< model <<", Year : " <<year << endl;
        cout <<"This year is not buying anything. Only buy a car in "<<year<<endl;
    }

};

int main(){
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year  = 2020;
    car1.displayInfo();


    return 0;
}