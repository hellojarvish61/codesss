 #include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int >arr;
    cout<< arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    // insert 
     arr.push_back(5);
     arr.push_back(6);
    // print
    for(int i= 0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl; 
    return 0;
}