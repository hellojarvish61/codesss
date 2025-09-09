// #include <bits/stdc++.h>
// using namespace std;

// struct Node{
//     public:
//     int data;
//     Node*next;

//     public:
//     Node(int data1, Node *next1){
//         data = data1;
//         next = next1;
//     }
// };
// int main(){
//     vector<int>arr = {2,5,8,7};
//     Node*y = new Node(arr[0],nullptr);
//     //cout<< y; //  this print the address of the location which you pass
//     cout<< y->data;
// }






// in the previous code if we dont want to pass the nullptr all the time thatswhy we write this code

// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;

//     public:
//     Node(int data1,Node * next1){
//         data = data1;
//         next = next1;
//     }
//     public:
//     Node (int data1){
//         data = data1;
//         next = nullptr;
//     }
// };
// int main(){
//     vector<int>arr = {2,5,8,7};
//     Node * y = new Node(arr[0]);// in the previous code we pass nullptr thatwhy we pass the new constructor to not always pass the nullptr
//     cout<< y-> data;
// }




// convert array to LL

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    public:
    Node(int data1,Node * next1){
        data = data1;
        next = next1;
    }
    public:
    Node (int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int>& arr) {
    Node* head = new Node(arr[0]);  // Step 1: Create first node (head)
    Node* mover = head;  // Step 2: Pointer to track last node

    for (int i = 1; i < arr.size(); i++) {  // Step 3: Iterate over vector
        Node* temp = new Node(arr[i]);  // Create new node
        mover->next = temp;  // Link last node to new node
        mover = temp;  // Move pointer to new node
    }
    
    return head;  // Step 4: Return head
}

void printLinkedList(Node* head) { 
    Node* temp = head;  // Step 1: Start from the head node
    while (temp != nullptr) {  // Step 2: Traverse until the last node
        cout << temp->data << " -> ";  // Step 3: Print the data of the current node
        temp = temp->next;  // Step 4: Move to the next node
    }
    cout << "NULL" << endl;  // Step 5: Print NULL at the end
}

int getLength(Node * head){
    int cnt = 0;
    Node * temp = head;
    while(temp != nullptr){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int checkIfPresent(Node * head,int val){
    Node * temp = head;
    while(temp != nullptr){
        if(temp->data == val)
        return 1;
        temp = temp ->next;
    }
    return 0;
}

int main(){
    vector<int>arr = {2,5,8,7};
    Node * head = convertArr2LL(arr); // convert arr to LL
    cout<< "LL: ";
    printLinkedList(head);

    int length = getLength(head);
    cout<< "lenght of LL: "<< length << endl;

    cout<<" check the number present or not "<< checkIfPresent(head,5);
}