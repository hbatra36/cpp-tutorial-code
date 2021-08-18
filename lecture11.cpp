#include<iostream>
using namespace std;

void print(int num){
    cout<<num<<endl;
    return;
}

int add(int n1, int n2){
    print(n1);
    print(n2);
    int sum = n1 + n2;
    return sum;
}

int main(){

    int a = 2;
    int b = 3;
    cout<<add(a,b)<<endl;
    
    /*

    -----syntax to write a function----
    returnType FunctionName(parameter1,para2,....){
        function code
    }


    */



    return 0;
}

