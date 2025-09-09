#include <iostream>
using namespace std;

int main()
{
    // int score;
    // cout << "enter the score" << endl;
    // cin >> score;
    // if (score < 300)
    // {
    //     cout << "india wins";
    // }
    // else
    // {
    //     cout << "pak wins" << endl;
    // }
    int marks;
    cout << "Enter Marks" << endl;
    cin >> marks;

    if (marks >= 90)
    {
        cout << "A grade";
    }
    else
    {
        if (marks >= 80)
        {
            cout << "B grade";
        }
        else
        {
            if (marks >= 60)
            {
                cout << " C grade";
            }
            else
            {
                if (marks >= 40)
                {
                    cout << "D grade";
                }
                else
                {
                    cout << "F grade";
                }
            }
        }
    }
}