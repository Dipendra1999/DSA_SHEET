#include<bits/stdc++.h>
using namespace std;
class Stack {
    
    int t;
    int *arr;
    int size;
    public: 
    Stack(){
        t=-1;
        size=100;
        arr=new int[size];
    }
    void push(int x){
        t++;
        arr[t]=x;
    }
    int pop(){
        int x=arr[t];
        t--;
        return x;
    }
    int Top(){
        return arr[t];
    }
    int Size(){
        return t+1;
    }
};

int main(){
    Stack s;
    s.push(24);
    s.push(25);
    s.push(28);
    cout<<s.Top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.Size()<<endl;
}