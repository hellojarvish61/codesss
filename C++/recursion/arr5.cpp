// print digit
#include<iostream>
using namespace std;

void printDigit(int n){
    // base case
    if(n==0){
        return;
    }
    // baaki recursion sabhal lega
    int newValueofN = n/10;
    printDigit(newValueofN);
    // 1 case mai solve karunga
    int digit = n%10;
    cout<< digit << " ";
    
}

int main(){
    int n = 647;
    printDigit(n);

    return 0;
}