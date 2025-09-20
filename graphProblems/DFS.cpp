#include<bits/stdc++.h>
using namespace std;

vector<int> adjList[1000];      //maximum limit 1000 elements 
bool visited[1000]={false};     // initially all nodes are not visisted
void DFS(int node){
    if(visited[node]) return;
    visited[node]=true;
    cout<<node<<" ";
    for( auto x : adjList[node]){
        DFS(x);
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
    DFS(node); 
}