#include<iostream>
#include<string>
using namespace std;

int main(){
    // string create
    string str;
    // input
    // cin>>str;
     getline(cin,str);
    // print
    cout<< str;
    cout<<"length: "<<str.length()<<endl;
    cout<<"isEmpty: "<<str.empty()<<endl;
    str.push_back('A');
    cout<<str<<endl;
    str.pop_back();
    cout<<str << endl;
    cout<<str.substr(0,6)<<endl;

    string a = "love";
    string b = "love";

    if(a.compare(b)==0){
        cout<<" same string"<<endl;
    }
    else{
        cout<<"a and b are not same" << endl;
    }
    return 0;
}