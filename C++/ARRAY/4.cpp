#include <iostream>
using namespace std;
bool find(int arr[], int size,int key){
    // linear search
    for(int i =0;i<size;i++){
        if(arr[i]==key)
        return true;
    }
    return false;
}
int main(){
    int arr[7]={1,3,4,5,6,7,8};
    int size = 7;

    cout<<"enter the key to find"<<endl;
    int key;
    cin>>key;

    if(find(arr,size,key)){
        cout<<"FOUND"<<endl;
    }
    else{
        cout<<"NOT FOUND"<<endl;
    }
}