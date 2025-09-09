#include <iostream>
using namespace std;

int main (){
    // char name[100];
    // cout<<"enter the name "<<endl;
    // cin>>name;
    // cout<<"aapka naam: "<< name <<"hai"<<endl;

    char name[100];
    cin >> name;
    for(int i = 0;i<7;i++){
        cout<<"index: "<< i << "value: "<<name[i]<<endl;
    }
}