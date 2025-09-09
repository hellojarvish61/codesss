 #include <iostream>
#include <vector>
using namespace std;
int main(){
    int i; 
    rev = 0;
    cout<<"enter the number you want to revrse \n";
    cin>>i;
    // while(i>0){
    //     rev = (rev*10)+(i%10);
    //     i = i/10;
    // }
    for( ;i>0;i=i/10){
        rev = (rev*10)+(i%10);
    }
    cout<<"revrse =" <<rev;
    return 0;
}