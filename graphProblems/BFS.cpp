#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int> adjList[N];      //maximum limit 1000 elements 
bool visited[1000]={false};     // initially all nodes are not visisted
queue<int> q;
int dis[N]={0};
void BFS(int node){
    q.push(node);
    dis[node]=0;
    visited[node]=true;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        cout<<q<<" ";
        for(auto n : adjList[x]){
            if(!visited[n]){
            q.push(n);
            dis[n]=dis[x]+1;
            visited[n]=true;
            }
        }
    }
}
int main(){
    int n;
    cout<<"enter the number of node in graph: "<<endl;
    cin>>n;
    cout<<"enter information of graph in the form of adjancency list format"<<endl;
    int size=0;
    int node;
    for(int i=1;i<=n;i++){
        cout<<i<< " is connected to how many node "<<endl;
        cin>>size;
        for(int j=0;j<size;j++){
            cin>>node;
            adjList[i].push_back(node);
        }
    }
    cout<<"enter the node from which you want to start traverse graph"<<endl;
    cin>>node;
    cout<<"order of BFS traversal"<<endl;
    BFS(node); 
    for(int i=1;i<=n;i++){
        cout<<dis[i]<<" ";
    }
}