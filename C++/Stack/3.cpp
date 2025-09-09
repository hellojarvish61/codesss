#include<bits/stdc++.h>

using namespace std;
class Stack{
    public:
    int * arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr = new int [size];
        this -> size = size;
        //size = 1000;
        top1 = -1;
        top2 = size;
    }
    // function 
    void push1(int data){
        if(top2 - top1 == 1){
            //space not available
            cout << "overflow"<< endl;
        }
        else{
            // space available
            top1++;
            arr[top1] = data;
        }
    }
    void pop1(){
        if(top1 == -1){
            // stack empty
            cout<< "underflow"<< endl;
        }
        else {
            //stack not empty
            top1--;
        }
    }
    void push2(int data){
        if(top2 - top1 == 1){
            //space not available
            cout << "overflow"<< endl;
        }
        else{
            top2 --;
            arr[top2] = data;
        }
    }
    void pop2(){
        if(top2 == size){
            // stack empty
            cout<< "underflow"<< endl;
        }
        else{
            // stack 2 is not emptry
            top2++;
        }
    }
}
int main (){
    Stack s(10);
    s.push1(10);
    s.print()
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();

    s.push2(100);
    s.print();
    s.push2(110);
    s.print();
    s.push2(120);
    s.print();
    return 0;
}