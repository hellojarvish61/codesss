// take 5 elements in input in array and print doubles
#include <iostream>
using namespace std;
int main()
{
    int arr[500];

    int n;
    cout << "how many number you want to add in array" << endl;
    cin >> n;
    cout << "enter the numbers" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // print doubles
    for (int i = 0; i < n; i++)
    {
        cout << 2 * arr[i] << " ";
    }
}