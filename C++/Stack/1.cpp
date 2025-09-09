#include<bits/stdc++.h>
using namespace std;

int main (){
    // // creation
    // stack<int>st;
    // // insertion
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);

    // // remove
    // st.pop();

    // // check element on top
    // cout<< "element on top is: "<<st.top()<< endl;

    // //size
    // cout<< "size of stack is: "<< st.size()<< endl;

    // if(st.empty()){
    //     cout<<"stack is empty"<< endl;
    // }
    // else {
    //     cout<< "stack is not empty"<< endl;
    // }

     
        // printing of stack
        stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}