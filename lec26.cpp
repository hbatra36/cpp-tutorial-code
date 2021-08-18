#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    //string str;

    //string str1(5, 'n');
    //getline(cin, str);
    string s1 = "fam";
    string s2 = "gg";

    //s1.append(s2);
    //or s1 = s1 + s2;

    //cout << s1 + s2 << endl;

    //cout << s1[1] << endl;

    /*
    string abc = "sdfjdlksjflajdshfkaskhfasjhfksha";
    abc.clear();
    cout<<abc;
    */

    //cout << s2.compare(s1) << endl;
    /*
    cout << s1 << endl;

    s1.clear();

    if(s1.empty())
        cout << "string is empty";
    */

    string st = "nincompoop";

    //st.erase(3, 3);
    //cout<< st << endl;

    //cout <<st.find("com");
    
    //st.insert(2, "lol");
    //cout << st <<endl;

    //cout << st.size() << endl;

    //cout << st.length() <<  endl;

    //string s = st.substr(6,4);
    //cout <<s <<endl;
    /*
    string n = "786";
    int x = stoi(n);
    cout << x + 2 << endl;
    */

    //int x = 786;
    //cout << to_string(x) + "2" << endl;
    
    string r = "sjfdlsjaflkfdkfajf";
    sort(r.begin(), r.end());

    cout<<r<<endl;

    return 0;
}