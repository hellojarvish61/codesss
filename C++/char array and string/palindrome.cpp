#include<iostream>
#include<string.h>

    bool checkPalindrome(char word[]){
        int i = 0;
        int n = strlen(word);
        int j = n - 1;

        while(i<=j){
            if (word[i]!=word[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
using namespace std;
int main(){
    char word[100] = "racecar";
    cout<<"palindrome check: "<< checkPalindrome(word);

    return 0 ;
}