#include <iostream>
using namespace std;

    class Node{
        public:
        int data;
        Node * next;

        Node (){
            this ->data = 0;
            this-> next = NULL;
        }
        Node (int data){
            this-> data = data;
            this -> next = NULL;
        }
        ~Node(){
            cout<< "node with value"<< this->data<< "deleted"<<endl;
        }
    };
    // i want to insert a node right at the head of linked list
    void insertAtHead(Node*  &head,Node* &tail,int data){
        // check for empty LL
        if(head == NULL){
            Node*newNode = new Node(data); // new node create
            head = newNode;
            tail = newNode;
            return;
        }
        // step 1:
        Node*newNode = new Node(data);
        // step 2:
        newNode -> next = head ;
        // step 3:
        head = newNode;
    }
    // i want to  insert a node right at the end of linked list
    void insertAtTail(Node*&head,Node* &tail , int data){
         // check for empty LL
         if(head == NULL){
            Node*newNode = new Node(data);
            head = newNode;
            tail = newNode;
            return;
        }
        //step 1: crete a node
        Node*newNode = new Node(data);
        // step 2 : connect to a tail node
            tail ->next = newNode;
        // step 3 : update  tail
        tail = newNode;
    }
    // print ka function hai yeh
         void print (Node * head){
        Node * temp = head; // temp ko first ke equal kiya hua hai
        while(temp != NULL){
            cout<< temp -> data<<" ";
            temp = temp -> next;
        }
     }
     int findLength(Node* &head){
        int len = 0;
        Node * temp = head;
        while(temp !=NULL){
            temp = temp -> next;
            len++;
        }
        return len;
     }


     void insertAtposition( int data,int position,Node*&head,Node* &tail ){
        if(head == NULL){
            Node*newNode = new Node(data);
            head = newNode;
            tail = newNode;
            return;
        }

         // step 1:
         if(position == 0){
            insertAtHead(head,tail,data);
            return;
         }
         int len = findLength(head);
         if(position>=len){
            insertAtTail(head,tail, data);
            return;
         }
         int i = 1;
         Node*prev = head;
         while(i<position){
            prev = prev -> next;
            i++;
         }
         Node*curr = prev -> next;

         // step 2
         Node*newNode = new Node(data);
         // step 3
         newNode -> next = curr;
         // step 4
         prev->next =newNode;
     }
     void deleteNode(int position,Node*&head,Node*&tail){
        if(head== NULL){
            cout<<"cannot delete,LL is empty";
            return ;
        }
        if(position == 1){
            Node * temp = head;
            head = head -> next;
            temp -> next = NULL;
            delete temp;
        }
        int len = findLength(head);
        if(position == len){
            int i = 1;
            Node * prev = head;
            while(i<position -1){
                prev = prev -> next;
                i++;
            }
            prev->next = NULL;
            Node*temp = tail;
            tail = prev;
            delete temp ;
        }
        // deleteing middle node
        // step find prev and curr
        int i = 1;
        Node * prev = head;
        while(i<position-1){
            prev = prev -> next;
            i++;
        }
        Node * curr = prev -> next;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
     }

    int main (){
        Node * head = NULL;
        Node * tail = NULL;
        insertAtHead(head,tail,20);
        insertAtHead(head,tail,30);
        insertAtHead(head,tail,40);
        insertAtHead(head,tail,50);
        insertAtTail(head,tail,77);

        print(head);
        cout<<endl;
        
        insertAtposition(101,5,head,tail);
        cout<<"printing after insert at position call "<< endl;
        print(head);
        cout<< endl;
        cout<< "head: "<< head->data<< endl;
        cout<< "tail: "<< tail-> data<< endl;


        deleteNode(4,head,tail);
        cout<<endl;
        print(head);
        cout << endl;
        
        
    }