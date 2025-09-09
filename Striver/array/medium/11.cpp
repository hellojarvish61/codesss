// Set Matrix Zeroes

// brute force approach

// #include <bits/stdc++.h>
// using namespace std;

// void markRow(vector<vector<int>>&matrix,int n , int m , int i){
//     for(int j = 0 ;j<m;j++){
//         if(matrix[i][j]!=0){
//             matrix[i][j] = -1;
//         }
//     }
// }
// void markCol(vector<vector<int>> &matrix, int n, int m, int j){
//     for(int i = 0;i<n;i++){
//         if(matrix[i][j]!=0){
//             if(matrix[i][j]!=0){
//                 matrix[i][j] = -1;
//             }
//         }
//     }
// }
// vector<vector<int>>zeroMatrix (vector<vector<int>>&matrix,int n,int m){
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<m;j++){
//             if(matrix[i][j]==0){
//                 markRow(matrix , n , m , i);
//                 markCol(matrix,n,m,j);
//             }
//         }
//     }
//  for(int i = 0;i<n;i++){
//     for(int j = 0;j<m;j++){
//         if(matrix[i][j]== -1){
//             matrix[i][j] = 0;
//         }
//     }
//  }
//  return matrix;
// }
// int main (){
//     vector<vector<int>>matrix = {{1,1,1},{1,0,1},{1,1,1}};
//     int n = matrix.size();
//     int m = matrix.size();

//     vector<vector<int>>ans = zeroMatrix(matrix,n,m);

//     cout<<"the final matrix is:\n";
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<m;j++){
//             cout<< ans[i][j]<<" ";
//         }
//         cout<<" \n";
//     }
//     return 0;
// }




// better approach

#include<bits/stdc++.h>
    using namespace std;
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){
    int row[n] = {0};
    int col[n] = {0};

    for(int i = 0;i< n;i++){
        for(int j = 0;j<m;j++){
            if(matrix[i][j]==0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(row[i]||col[j]==1){
                matrix[i][j];
            }
        }
    }
    return matrix;
}
    int main (){
vector<vector<int>>matrix = {{1,1,1},{1,0,1},{1,1,1}};
    int n = matrix.size();
    int m = matrix.size();

    vector<vector<int>>ans = zeroMatrix(matrix,n,m);

    cout<<"the final matrix is:\n";
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<< ans[i][j]<<" ";
        }
        cout<<" \n";
    }
    return 0;
    
}