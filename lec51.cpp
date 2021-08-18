#include<iostream>
using namespace std;

// function overloading

class A {
public:
    void fun(){
        cout<<"function with no arguments"<<endl;
    }
    void fun(int x){
        cout<<"function with int arguments"<<endl;
    }
    void fun(double c){
        cout<<"function with double arguments"<<endl;
    }

};

// operator overloading

class Complex {
private:
    int real,imag;
    public:
        Complex(int r = 0, int i = 0){
            real = r;
            imag = i;
        }
    Complex operator + (Complex const &obj){
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }

    void display(){
        cout<<real <<" + i"<<imag<<endl;
    }
};

// runtime polymorphism
class base {
public:
    virtual void print(){
        cout<<"this is the base class print function"<<endl;
    }
    void display(){
        cout<<"this is the base class display function"<<endl;
    }
};

class derived: public base{
public:
    void print(){
        cout<<"this is the derived class print function"<<endl;
    }
    void display(){
        cout<<"this is the derived class display function"<<endl;
    }
};

int main(){

    A obj;
    obj.fun();
    obj.fun(4);
    obj.fun(1.9);

    Complex c1(12,7), c2(6,7);
    Complex c3 = c1 + c2;
    c3.display();

    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr -> display();  

    return 0;
}