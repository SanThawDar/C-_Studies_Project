// #include <iostream>
// #include <iomanip> // Required for manipulators


// int main(){
//     int num =123;
//     std:: cout<< "Without setw : "<< num <<std:: endl;
//     std:: cout<< "With setw(5) : "<< std::setw(5) << num << std:: endl;
//     return 0;
// }

/*
Setting fill character ('std:: setfill')
*/

// #include <iostream>
// #include <iomanip>

// int main(){
//     int num = 123;
//     std:: cout<< "With setw(5) and setfill ('*'): " << std:: setw(5) << std::setfill('*') << num << std:: endl;
//     return 0;

// }


/*
Setting precision ('std:: setprecision')
*/

// #include <iostream>
// #include <iomanip>

// int main(){
//     double pi = 3.14159;
//     std::cout << "Default precision : "<< pi<< std:: endl;
//     std::cout << "With setprecision(4): "<<std:: setprecision(4)<< pi << std::endl;
//     return 0;
// }


/*
Fixed and Scientific Notation
*/

// #include <iostream>
// #include <iomanip>

// int main(){
//     double num = 12345.6789;
//     std::cout<< "Default : " << num << std:: endl;
//     std::cout<< "Fixed : " << std::fixed << num << std::endl;
//     std::cout<< "Scientific : " << std:: scientific << num << std:: endl;
//     return 0;
// }

/*
Changing Number Base
*/

// #include <iostream>
// #include <iomanip>

// int main(){
//     int num =255;
//     std::cout<< "Decimal : " << std::dec << num << std:: endl;
//     std::cout<< "Hexadecimal : "<<std::hex << num << std:: endl;
//     std::cout<< " Octal : " << std::oct<<num<< std:: endl;
//     return 0;
// }

/*
Custom Manipulators
*/

// #include <iostream>
// #include <iomanip>
// #include <ostream>


// std::ostream& greeting(std::ostream& os){
//     os<<"Hello, World!";
//     return os;
// }


// int main(){
//     std::cout<<greeting<< std::endl;
//     return 0;
// }


/*
Control Statements
*/

// #include <iostream>
// #include <iomanip>
// #include <ostream>

// int main(){

//     int x =4;
//     if (x>0){
//         std::cout << "Positive Number : " << x << " value."<<std:: endl;
//     }
//     return 0;
// }


/*
Basics of functions
*/

// #include <iostream>
// using namespace std;

// inline int square(int x){
//     return x * x;
// }

// int main()
// {
//     int num =5;

//     int squaredValue = square(num);

//     cout<< "square value:  "<< squaredValue <<endl;

//     return 0;

// }


/*
Inline functions 
*/

// #include <iostream>
// #include <iomanip>

// int add(int a,int b){
//     return a+b;
// }

// int main(){
//     int sum = add(2,3);
// }


/*
Nesting function
*/

// #include <iostream>
// #include <iomanip>


// int add(int a, int b){
//     return a+b;
// }

// int main(){
//     int sum = add(2,3);
// }

/*
Recursion : A function that calls itself.
*/

// #include <iostream>
// #include <iomanip>

// int factorial(int n){
//     if(n<=1) return 1;
//     else return n* factorial(n-1);
// }

// int main(){
//     int factnum = factorial(3);
//     std::cout<<"Factorial Value: " << factnum << std::endl;
// }


/*
Storage Classes: Defines scope, visibility, and lifetime of variables.
*/

#include <iostream>
#include <iomanip>

// class Math{
//     public:
//     int add(int a, int b){
//         return a+b;

//     }
//     double add(double a,double b){
//         return a+b;
//     }
// };


// Class and Object

/*
Function overriding in a program means that it can reuse, extend, flexible in an application
*/

// class Base{

// public:
//     virtual void show(){
//         std::cout <<"Base";
//     }

// };

// class Derived: public Base{
// public:
//     void show() override{
//         std:: cout <<"Derived";
//     }
// };

/*
Combining objects to form complex types.
*/

#include <iostream>

class Complex{
    public:
        int real,imag;
        Complex operator + (const Complex &c){
            Complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }
};

// Unary Operator Overloading

class Number{
    public:
        int value;
        Number operator -(){
            Number temp;
            temp.value =-value;
            return temp;
        }
};

// Binary Operator Overloading

// Complex operator + (const Complex &c);

// // Relational Operator Overloading

// bool operator ==(const Complex &c);

// Polymorphism

#include <iostream>

class Base{
    public:
        virtual void show(){
            std::cout <<"Base";
        }
};

class Derived : public Base{
    public:
        void show() override{std::cout <<"Derived"; }
};

/*
File Handling : Files provide a way to store
*/

