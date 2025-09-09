// #include <bits/stdc++.h>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node * next;
//     Node(int data1, Node * next1) {
//         data = data1;
//         next = next1;
//     }
//     Node(int data1) { 
//         data = data1;
//         next = nullptr;
//     }
// };
// Node * convertArr2L(vector<int>& arr) {
//     Node * head  = new Node(arr[0]);
//     Node * mover = head;
//     for(int i = 1; i < arr.size(); i++) {
//         Node* temp = new Node(arr[i]);
//         mover->next = temp;
//         mover = temp;
//     }
//     return head;
// }
// int main () {
//     vector<int> arr = {2, 5, 6, 7};
//     Node * head = convertArr2L(arr);
//     Node* temp = head;
//     while(temp != nullptr){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout<< head->data;
//     return 0;
// }







#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

Node* head = nullptr;

void insertAtLast(int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void traverse() {
    Node* temp = head;
    cout << "List is: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n1) Insert at last:\n";
        cout << "2) Traverse:\n";
        cout << "3) Exit:\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Number = ";
                cin >> value;
                insertAtLast(value);
                break;
            case 2:
                traverse();
                break;
            case 3:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }

    } while (choice != 3);

    return 0;
}
