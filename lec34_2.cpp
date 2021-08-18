#include<iostream>
using namespace std;
//Printing numbers in increasing and decreasing order using recurrsion.

void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}

int main(){
    int n;cin>>n;
    dec(n);
    inc(n);

    return 0;
}