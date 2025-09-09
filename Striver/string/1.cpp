// removeOuterParentheses

#include <iostream>
using namespace std;
string remoOuterParentheses(string s){
    string result = " ";
    int openCount = 0;

    for(int i = 0;i<s.length();i++){
        if(s[i]== '('){
            if(openCount>0){
                result += s[i];
            }
            openCount++;
        }
        else{
            openCount --;
            if(openCount>0){
                result += s[i];
            }
        }
    }
    return result;
}
int main (){
    string s = "(()())(())";
    cout<< remoOuterParentheses(s)<< endl;
}