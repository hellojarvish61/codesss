#include <iostream>
using namespace std;

// void printName()
// {
//     int n;
//     cout << "Enter the value of n" << endl;

//     cin >> n;
//     for (int i = 0; i < n; i++)
//     { 
//         cout << "mohit" << endl;
//     }
// }
    // n is parameter
void printCounting(int n){
    for(int i = 1;i<=n;i++){
        cout<<i<<endl;
    }
}

int main()
{
    int n;
    cout<<"ente r the value of n"<<endl;
    cin>>n;
    // n is argument
    printCounting(n);
}