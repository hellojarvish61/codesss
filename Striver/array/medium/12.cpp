// Rotate Image by 90 degree

// brute force
// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>> rotate(vector<vector<int>> &matrix, int n, int m) {
//     vector<vector<int>> rotated(n, vector<int>(m, 0));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             rotated[j][n - i - 1] = matrix[i][j];
//         }
//     }
//     return rotated;
// }

// int main() {
//     vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int n = arr.size();
//     int m = arr.size();
//     vector<vector<int>> rotated = rotate(arr, n, m);
//     cout << "Rotated Image" << endl;
//     for (int i = 0; i < rotated.size(); i++) {
//         for (int j = 0; j < rotated[i].size(); j++) {
//             cout << rotated[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }





// optimal approach

#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>&arr){
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i = 0;i<arr.size();i++){
        reverse(arr[i].begin(),arr[i].end());
    }
}
int main(){
    vector<vector<int>>arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(arr);
    cout<<"rotated image"<< endl;
    
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr.size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
}
