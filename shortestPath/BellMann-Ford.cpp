#include<bits/stdc++.h>
using namespace std;

const int INF=1000000;


int main(){
    int n;
    cout<<"enter the number of node:";
    cin>>n;
    cout<<"Enter the number of edges:";
    int e;
    cin>>e;
    vector<tuple<int,int,int>> edgelist(n);
    for(int i=0;i<e;i++){
        int a,b,w;
        cin>>a>>b>>w;
        edgelist.push_back(make_tuple(a,b,w));
    }
    int path[n+1];
    for(int i=1;i<=n;i++){
        path[i]=INF;
    }
    int node;
    cout<<"enter the node from which start finding shortest path:";
    cin>>node;
    path[node]=0;
    for(int i=1;i<=n-1;i++){
    for(tuple<int, int , int> x: edgelist){
        int a=get<0>(x);
        int b=get<1>(x);
        int w=get<2>(x);
        path[b]=min(path[b],path[a]+w);
    }
    }
    for(int i=1;i<n+1;i++)
        cout<<path[i]<<" ";
    cout<<endl;
    return 0;
}