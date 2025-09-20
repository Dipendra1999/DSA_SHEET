#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
    Node(int val, Node* next2){
        this->val=val;
        this->next=next2;
    }
    void showlist(){
        Node* x=this;
        while(x!=NULL){
            cout<<x->val<<" ";
            x=x->next;
        }
        cout<<endl;
    }
};
Node* deleteAtTail(Node* head){
    
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
int main(){
    // simple node creation ....
    Node* head1=new Node(45);
    cout<<head1->val<<endl;
    cout<<head1<<endl;

    // array of node creations...
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    Node* head2=NULL;
    if(n>0){
        Node* node1=new Node(arr[n-1]);
        head2=node1;
    }
    for(int i=n-2;i>=0;i--){
        Node* node2=new Node(arr[i],head2);
        head2=node2;
    }
    head2->showlist();
    cout<<endl;
    
    // Deleting at the tail of singly list...
    head2=deleteAtTail(head2);
    head2->showlist();
}