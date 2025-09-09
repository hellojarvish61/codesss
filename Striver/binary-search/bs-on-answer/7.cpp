// Kth Missing Positive Number


// #include <bits/stdc++.h>
// using namespace std;
// int missingK(vector<int>vec,int n , int k){
//     for(int i = 0; i< n;i++){
//         if(vec[i]<=k) k++; // shifting k
//         else break;
//     }
//     return k;
// }
// int main(){
//     vector<int>vec = {4,7,9,10};
//     int n = 4;
//     int k = 4;
//     int ans = missingK(vec,n,k);
//     cout<<"the missing number is: " << ans << endl;
//     return 0;
// }



// optimal appraoch
#include <bits/stdc++.h>
using namespace std;
int missingK(vector<int>vec,int n , int k){
    int low = 0 ;
    int high  = n -1;

    while(low<=high){
        int mid = (low+high)/2;
        int missing = vec[mid] - (mid-1);
        if(missing<k){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return k+high+1;
}
int main (){
    vector<int>vec= {4,7,9,10};
    int n = 4;
    int k = 4;
    int ans = missingK(vec,n,k);
    cout<< "the missing number is: "<< ans << endl;
    return 0;
}