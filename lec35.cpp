#include<iostream>
using namespace std;
//challenges using recursion
void reverse(string s){
    if(s.length() == 0){
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

void replacePi(string s){
    if(s.length() == 0){
        return;
    }
    if(s[0] == 'p' && s[1] == 'i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}

void towerOfHanoi(int n, char src, char dest,char helper){
    
    if(n ==0){
        return;
    }
    
    towerOfHanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper, dest,src);

}

string removeDup(string s){
    if(s.length()== 0){
        return "";
    }

    char ch = s[0];
    string ans = removeDup(s.substr(1));
    if(ch == ans[0]){
        return ans;
    }
    return (ch+ans);
}

string moveallX(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = moveallX(s.substr(1));

    if(ch == 'x'){
        return ans +ch;
    }
    return ch + ans;
}

void subseq(string s,string ans){
    
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans +ch);

}

void subseqasc(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);
    subseqasc(ros,ans);
    subseqasc(ros,ans+ch);
    subseqasc(ros,ans + to_string(code));

}

string keyPadArr[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s,string ans){
    if(s.length() ==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string code = keyPadArr[ch - '0'];
    string ros = s.substr(1);

    for(int i = 0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }
}
int main(){

    reverse("binod");
    cout<<endl;
    replacePi("pipppppipipi");
    cout<<endl;
    towerOfHanoi(3,'A','C','B');
    cout<<removeDup("aaaabbbeeecdddd")<<endl;
    cout<<moveallX("axbdxcefxhix")<<endl;

    subseq("ABC",""); cout<<endl;

    subseqasc("AB","");
    cout<<endl;

    keypad("23","");
    cout<<endl;

    return 0;
}
