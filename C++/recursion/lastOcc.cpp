#include<iostream>
using namespace std;
void lastOccLTR(string&s,char x , int i ,int&ans){
    if(i>=s.size()){
        return ;
    }

    if(s[i]==x){
        ans = i;
    }
    lastOccLTR(s,x,i+1,ans);
}
int main (){
    string s;
    cin >>s;
    char x;
    cin >> x;
    int ans = -1;
    int i = 0;
    lastOccLTR(s,x,i,ans);// 0 i ka starting postion bta rha hai 
    cout<<ans<<endl;
}