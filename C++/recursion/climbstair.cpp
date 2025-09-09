#include <iostream>
using namespace std;
    int climb(int n){
        // base case
        if (n==0||n==1){
            return 1;
        }
        // recursive relation
        int ans = climb(n-1)+climb(n-2);
        return ans;
    }
int main(){
    int n;
    cout<< " enter the value of n "<< endl;
    cin >> n;

    int ans = climb(n);
    cout<< "answer is "<< ans << endl;
    return 0;
}