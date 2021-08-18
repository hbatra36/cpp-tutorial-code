#include<iostream>
using namespace std;
int main() {
    int savings;
    cin>>savings;

    if(savings>5000){
        cout<<"something\n";
    }else if(savings>2000) {
        cout<<"something else\n";
    }else{
        cout<<"something else else\n";
    }

    return 0;

}