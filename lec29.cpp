#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n && !(n&(n-1)))
        cout<<true;
    else
        cout<<false;

    return 0;
}