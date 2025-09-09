#include <iostream>
#include <queue>
using namespace std;
int main (){
    // creation 
    queue<int>q;


    //insertion 
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    // size 
     cout<<"size of queue"<<q.size()<<endl;
     q.pop();
     cout<<"size of queue"<<q.size()<<endl;
}