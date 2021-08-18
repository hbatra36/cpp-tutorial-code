#include"bits/stdc++.h"
using namespace std;
//Encapsulation : Hiding "sensitive" data from the user.
//we achieve encapsulation in classes by using private, public and protected keywords.
class A{
public:
    int a;
    void funcA(){
        cout<<"Func A\n";
    }
private:
    int b;
    void funcB(){
        cout<<"Func B\n";
    }
protected:
    int c;
    void funcC(){
        cout<<"Func C\n";
    }
};

int main(){

    A obj;
    obj.funcA();

    return 0;
}