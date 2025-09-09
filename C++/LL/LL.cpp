//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node * next;

    public:
    Node(int data1,Node*next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node * convertArr2LL(vector<int>arr){
    Node * head = new Node(arr[0]);
    Node * mover = head;
    for(int i = 1;i<arr.size();i++){
        Node * temp = new Node (arr[i]);
        mover ->next = temp;
        mover = temp;
    }
    return head;
}
int lengthOfLL(Node*head){
    int cnt = 0;
        Node * temp = head;
    while(temp){
        temp = temp ->next;
        cnt++;
    }
    return cnt;
}
int checkIfPresent(Node * head , int val){
    Node * temp = head;
    while(temp){
        if(temp-> data ==val)return 1;
        temp = temp->next;
    }
}
    Node * removeHead(Node*head){
        if(head == NULL) return head;
        Node * temp = head;
        head = head->next;
        delete temp ;
        return head;
    }
    // print ka function hai 
    void print(Node *head){
        while(head != NULL){
            cout<< head ->data <<" ";
            head = head ->next;
        }
        cout<<endl;
    }
    Node * removeTail(Node * head){
        if(head == NULL||head ->next == NULL) return NULL;
        Node * temp = head;
        while(temp ->next -> next !=NULL){
            temp = temp -> next;
        }
        delete temp->next;
        temp->next =NULL;
        return head;
    }
    Node* removeK(Node * head,int k){
        if(head == NULL)return head;
        if(k==1){
            Node * temp = head;
            head = head -> next;
            delete(temp);
            return head;
        }
        int cnt = 0;
        Node* temp = head;
        Node * prev = NULL;
        while(temp !=NULL){
            cnt ++;
            if(cnt == k){
                prev->next = prev -> next->next;
                delete(temp);
                break;
            }
            prev = temp;// previous data ko store krne ke liye
            temp = temp ->next;
        }
        return head;
    }
    Node * inserHead(Node * head,int val){
        //Node * temp = head;
        Node *temp = new Node(val,head);
        return temp;
    }
    Node * inserTail(Node * head ,int val){
        if(head == NULL){
            Node * temp = new Node (val);
            return temp;
        }
        Node * temp = head;
        while(temp ->next!=NULL){
            temp = temp -> next;
        }
        Node * newNode = new Node(val);
        temp -> next = newNode;
        return head;
    }
int main(){ 
    vector<int>arr = {2,5,7,9};
    Node * head = convertArr2LL(arr);
    //cout<<head->data;

    // traversal
    // Node * temp = head;
    // while(temp){
    //     cout<< temp -> data << " ";
    //     temp = temp ->next;
    // }

    //cout<<lengthOfLL(head);

    // head = removeHead(head);
    //  head = removeTail(head);
    //  head = removeK(head,3);
    head = inserTail(head,100);
    print(head);
} 