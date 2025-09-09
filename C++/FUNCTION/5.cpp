#include <iostream>
using namespace std;
int getcounting(int n){
    for(int i = 1;i<=n;i++){
        cout<< i << " ";
    }
    cout<< endl;
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int counting = getcounting(n);
}