#include <iostream>
using namespace std;
void printSubsequences(string str,string output, int i)
{
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }
    // exclude
    // in case of exclude string remain same string remain same
    // but i ko aage badhanas parega
    printSubsequences(str,output,i+1);
    //include 
    //in output we can add current character in current character
    output.push_back(str[i]);
    // output = output + str[i];
    // line 16 and 17 both are same
    printSubsequences(str,output,i+1);
}
int main()
{
    string str = "abc";
    string output = " ";
    int i = 0; // starting index;

    printSubsequences(str, output, i);
    return 0;
}