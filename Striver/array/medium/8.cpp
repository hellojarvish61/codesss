// next permutation

// better approach
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr = {1,3,2};
    
    next_permutation(arr.begin(),arr.end());//using in-built function of C++
    
    for(int i = 0;i<arr.size();i++){
        cout<< arr[i] <<" ";
    }
    
    return 0;
}

// optimal approach
 

