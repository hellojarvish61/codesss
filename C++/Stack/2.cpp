// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Stack{
    public:
    int * arr;
    int top;
    int size;
    public:
    Stack(int size){
        arr = new int[size];
        //size = 1000;
        this -> size = size;
        top = -1;
    }

    // functions

    void push(int data){
       if(size-top>1){
            // space available
            // insert
            top++;
            arr[top] = data;
        }
        else{
            // space not availble
            cout<< "satck not availble";
        }
    }
    void pop(){
        if(top == -1){
            // stack is empty
            cout<< "stack underflow"<< endl;
        }
        else{
            // stak is not empty
            top --;
        }
    }
    int getTop(){
            if(top == -1){
                cout<<"there is not element"<< endl;
            }
            else{
                return arr[top];
            }
    }
    int getSize(){
        return top+1;
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            false;
        }
    }
};
int main (){
     // creation
    Stack s(10);
    // insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isEmpty()){
        cout<< s.getTop()<< " ";
        s.pop();
    }
    cout<<"size of stack "<< s.getSize()<< endl;
    return 0;
}