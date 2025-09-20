#include<bits/stdc++.h>
using namespace std;
class Queue {
    
    int f;  //front
    int r;  //rear
    int *arr;
    int size;
    public: 
    Queue(){
        f=-1;
        r=-1;
        size=10;
        arr=new int[size];
    }
    void enqueue(int x){
        if(f==size-1){ cout<<"queue is full "<<endl; exit(1);}
        if(f==-1){
            f=r=0;
            arr[f]=x;
        }
        else{
            r++;
            arr[r]=x;
        }
    }
    int dequeue(){
        int x;
        if(f==-1){ cout<<"queue is empty"<<endl; exit(1);}
        x=arr[f];
        f--;
        if(f==-1){
            r=-1;
        }
        return x;
    }
    int top(){
        if(f==-1){ cout<<"Queue is empty"<<endl; exit(1);}
        return arr[f];

    }
    int Size(){
        return r-f ;
    }
};

int main(){
    Queue s;
    s.enqueue(24);
    s.enqueue(25);
    s.enqueue(28);
    cout<<s.top()<<endl;
    cout<<s.dequeue()<<endl;
    cout<<s.Size()<<endl;
}