#include<iostream>
using namespace std;
//Single Inheritance
class A {
public:
    void func(){
        cout<< "Inherited";
    }
};
class B : public A {
};

//Multiple Inheritance
class C : public A, public B{
public:
};

//Multilevel Inheritance
//class B inherited from class A and class C inherited from B so C will have both A and B.

//Hybrid inheritance
//if D inherits from B and C and B intern inherits from A then D will have all A , B and C.

//Hierarchical 
//looks like a tree.
//D and E inherits from B, F and G inherits from C, B and C inherits from A.
