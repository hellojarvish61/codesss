// find charcter index using recursion
#include <iostream>
using namespace std;

     int checkKey(string str,int& n ,int i,char key ){
    // base case 
    if(i>=n){
        // key not found 
        return ; 
    }
    // 1 case solve krlo 
    if(str[i]==key){
        //return i;
        cout<<"found at: "<< i << endl; 
    }
    // baaki ka recursion sambhal lega 
    int  ans = checkKey(str,n,i+1,key);
    return ;
}

int main(){
    string str = "mohitranjan";
    int n = str.length();
    char key = 'a';
    int i = 0;
    int  ans = checkKey(str,n,i,key);
    //cout<< "answer is: "<< ans << endl;
    return 0;
}