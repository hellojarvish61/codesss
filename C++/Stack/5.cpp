// reverse a stack
#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int>&s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int topElement = s.top();
    s.pop();
    insertAtBottom(s,target);
    //bt
    s.push(topElement);
}
void reverseStack (stack<int>&s){
    // base case
    if(s.empty()){
        return;
    }


    int target = s.top();
    s.pop();
    // reverse a stack
    reverseStack(s);
    insertAtBottom(s,target);
}
int main (){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<< "printing"<< endl;
    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}