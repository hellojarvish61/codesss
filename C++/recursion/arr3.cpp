// find charcter present in string or not by using recursion
#include <iostream>
using namespace std;

     bool checkKey(string str,int n ,int i,char key ){
    // base case 
    if(i>=n){
        // key not found 
        return false;
    }
    // 1 case solve krlo 
    if(str[i]==key){
        return true;
    }
    // baaki ka recursion sambhal lega 
    bool  ans = checkKey(str,n,i+1,key);
    return ans;
}

int main(){
    string str = "mohitranjan";
    int n = str.length();
    char key = 'r';
    int i = 0;
    bool  ans = checkKey(str,n,i,key);
    cout<< "answer is: "<< ans << endl;
    return 0;
}