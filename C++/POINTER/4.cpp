#include<iostream>
using namespace std;

    void solve(int**ptr ){
        ptr = ptr + 1;
    }

int main(){
    // int a = 5;
    // int *p = &a;

    // util(p);
    // cout<< a << endl;

    int x = 112;
    int * p = &x;
    int ** ptr = &p;
    solve (ptr);

    cout<< x << endl;
}