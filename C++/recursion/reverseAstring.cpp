#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void reverse(string&s,int start,int end){
    // base case
    if(start>=end){
        return;
    }
    // ek case
    swap(s[start],s[end]);
    // baaki recursion samha lega
    reverse(s,start+1,end-1);
}
int main(){
    string s;
    cin >> s;
    int start = 0;
    int end = s.size()-1;
    reverse(s,start,end);
    cout<<"answer is "<< s << endl;// isiliye liye kyuki s ko by refrence pass kiye hai
}