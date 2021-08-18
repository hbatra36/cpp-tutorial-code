#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){

    string n = "374298573297";
    sort(n.begin(), n.end(),greater<int>());

    cout<<n<<endl;

    return 0;
}