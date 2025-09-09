// how to store data in string using recursion
#include <iostream>
#include <vector>
using namespace std;

     void checkKey(string& str,int i ,int & n,char &key,vector<int>&ans ){
    // base case 
    if(i>=n){
        // key not found 
        return ;
    }
    // 1 case solve krlo 
    if(str[i]==key){
        // store kralo
       ans.push_back(i);
    }
    // baaki ka recursion sambhal lega 
    return checkKey(str,i+1,n,key,ans);
}

int main(){
    string str = "lovebabber";
    int n = str.length();
    char key = 'b';
    int i = 0;
    vector<int>ans;
       checkKey(str,i,n,key,ans);
    cout<< "printing ans: "<< endl;
    for(auto val:ans){
        cout<< val << " ";
    }
    cout<< endl;
    
    return 0;
}