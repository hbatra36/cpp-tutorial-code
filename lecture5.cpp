#include<iostream>
using namespace std;

int main(){

    int pocketMoney = 3000;

    for(int date = 1; date <= 30; date ++){

        if(date%2 == 0){
            continue; //continue and break have similar meanings as that of java and python.
        }
        if(pocketMoney == 0){
            break;
        }
        cout<<"Go out today"<<endl;
        pocketMoney = pocketMoney - 300;

    }



    return 0;
}