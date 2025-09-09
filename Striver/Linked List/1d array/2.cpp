#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    public :
    Node(int data1,Node * next1){
        data = data1;
        next =next1;
    }
    public :
    Node (int data1){
        data = data1;
        next = nullptr;
    }
};
Node * convertArrayToLL(vector<int>arr){
    if(arr.empty()) return nullptr;

    Node * head = new Node(arr[0]);
    Node * mover = head;

    for(int i = 1;i<arr.size();i++){
        mover->next = new Node(arr[i]);
        mover = mover -> next;
    }
    return head;
}

Node * deleteHead(Node * head){
    if(head == nullptr){
        cout<< "list is empty"<< endl;
        return nullptr;
    }
    Node * temp = head;
    head = head->next;
    delete temp;

    return head;
}
Node * deleteTail(Node * head){
    if(head == NULL || head -> next == NULL) return NULL;
    Node * temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp -> next = nullptr;

      return head;
}

Node * removeK(Node * head , int k){
    if(head == NULL) return head;
    if(k == 1){
        Node * temp = head;
        head = head -> next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node * temp = head;
    Node * prev = NULL;
    while(temp != NULL){
        cnt ++;
        if(cnt == k){
            prev -> next = prev -> next-> next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp -> next ;
    }
    return head;
}

Node * removeEl(Node * head , int el){
    if(head == NULL) return head;
    if(head -> data == el){
        Node * temp = head;
        head = head -> next;
        free(temp);
        return head;
    }
    Node * temp = head;
    Node * prev = NULL;
    while(temp != NULL){
             if(temp-> data == el){
            prev -> next = prev -> next-> next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp -> next ;
    }
    return head;
}
Node * insertHead(Node* head, int val ){
    Node * temp = new Node (val,head);
    return temp;
}
Node * insertTail(Node * head,int val){
    if(head == NULL){
        return new Node (val);
    }
    Node * temp = head;
    while(temp->next !=NULL){
        temp = temp -> next;
    }
    Node * newNode = new Node (val);
    temp -> next = newNode;
    return head;
}
Node * insertPosition(Node * head,int el,int k){
    if(head == NULL){
        if(k==1){
            return new Node(el);
        }
        else{
            return head;
        }
    }
    if(k==1){
        Node * newHead = new Node(el,head);
        return newHead;
    }
    int cnt = 0;
    Node * temp = head;
    while(temp != NULL){
        cnt ++;
        if(cnt == (k-1)){
            Node * x = new Node (el,temp -> next);
            temp -> next = x;
            break;
        }
        temp = temp -> next;
    }
    return head;
}
void printLinkedList(Node * head){
    Node * temp = head;
    while(temp != nullptr){
        cout<< temp-> data <<" -> ";
        temp = temp -> next;
    }
    cout<< "null"<< endl;
}

int main(){
    vector<int>arr = {2,5,8,7};

    Node * head = convertArrayToLL(arr);
    cout<< "original LL: ";
    printLinkedList(head);

  //  head = deleteHead(head);
   // head = deleteTail(head);
  //  head = removeK(head,3);
 //  head = removeEl(head, 5);

 //head = insertHead(head,100);
  head = insertPosition(head,100,5);

    cout<< "after deleteing head: ";
    printLinkedList(head);
}