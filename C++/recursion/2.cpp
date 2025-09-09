#include <iostream>
using namespace std;

    void printcounting(int n){
        // base case
        if(n==0){
            return;
        }
        // processing
        cout<< n << endl;

        // recursive realtion 
        printcounting(n-1);
    }

int main(){
    int n;
    cout<< " enter the value of n "<< endl;
    cin >> n;

    printcounting(n);

    cout<< "asnwer is: " << endl;

    return 0;