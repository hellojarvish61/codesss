 // left rotate  the array by D place
// brute force approach


// #include <iostream>
// using namespace std;
// void Rotatetoright(int arr[], int n, int d)
// {
// d = d % n;
//     int temp[d];
//     for (int i = 0;i<d;i++){
//         temp[i] = arr[i];
//     }
//     for(int i = d;i<n;i++){
//         arr[i-d] = arr[i];
//     }
//     for(int i = n-d;i<n;i++){
//         arr[i] = temp[i -(n-d)];
//     }
// }
// int main()
// {
//   int n = 7;
//   int arr[] = {1, 2, 3, 4, 5, 6, 7};
//   int d = 2;
//   Rotatetoright(arr, n, d);
//   cout << "After Rotating the elements to right " << endl;
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   return 0;
// }




// optimal approach 

#include <iostream>
#include <algorithm> 
using namespace std;

void leftRotate(int arr[], int n, int d) {
    d = d % n;
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int d;
    cout << "Enter the number of positions to rotate to the left: ";
    cin >> d;
    leftRotate(arr, n, d);
    cout << "Array after rotating " << d << " positions to the left: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



#include <iostream>
#include <algorithm>
using namespace std;

void leftRotate(int arr ,int n, int d){

    d = d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n;
    cout<<"enter the number of elements in the array";
    cin >> n;

    int arr[n];
    cout<<"enter"<< n <<" elements";
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int d;
    cout<< "enter the number of positions to rotate to the left: ";
    cin>>d;

    leftRotate(arr,n,d);
}


// while(start<=end){
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     start ++;




