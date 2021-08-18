//OOPs in cpp
#include<iostream>
using namespace std;
class Student{
    string name;
    public:
    int age;
    bool gender;
    //condtructor (Default)
    Student(){
        cout<<"Default constructor"<<endl;
    }

    //constructor (Parameterised)
    Student(string s, int a, bool g){
        cout<<"Parameterised constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }
    //copy constructor
    Student(Student &a){

        cout<<"Copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    //Destructor
    ~Student(){
        cout<<"Destructor called"<<endl;
    }
    //set function
    void setName(string s){
        name = s;
    }
    //getter function
    void getName(){
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }

    bool operator == (Student &a){
        if(name == a.name && age == a.age && gender  == a.gender){
            return true;
        }
        return false;
    }

};

int main(){
    /*
    Student arr[3];
    for(int i = 0; i<3;i++){
        string s;
        cout<<"Name = ";
        cin>>s;
        arr[i].setName(s);
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;

    }
    for(int i = 0; i<3;i++){
        arr[i].printInfo();
    }
    */
    Student a("Tim",22,1);
    //a.getName();
    //a.printInfo();
    Student b;
    Student c = a;//using copy constructor

    if(c==a){
        cout<<"Same"<<endl;
    }else{
        cout<<"Not Same"<<endl;
    }
    
    return 0;
}