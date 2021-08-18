#include<iostream>
using namespace std;

int sumTillN(int n){
    if(n == 0){
        return 0;
    }
    return (n + sumTillN(n-1));
}
int nPowerP(int n, int p){
    if(p == 0){
        return 1;
    }
    return (n*nPowerP(n,p-1));
}

int FactorialN(int n){
    if(n == 1){
        return 1;
    }
    return (n*FactorialN(n-1));
}

int fibo(int n){
    if(n == 0 || n==1){
        return n;
    }
    
    return fibo(n-1)+fibo(n-2);
}

int main(){

    int n; cin>>n;
    //int p; cin>>p;
    //cout<<sumTillN(n)<<endl;
    //cout<<nPowerP(n,p)<<endl;
    //cout<<FactorialN(n)<<endl;
    cout<<fibo(n)<<endl;

    
    return 0;
}