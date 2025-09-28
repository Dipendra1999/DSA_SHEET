#include<bits/stdc++.h>
using namespace std;

unordered_map<int,vector<pair<int,int>>> inputGraph(int n){
    unordered_map<int,vector<pair<int,int>>> graph;
    int i=1;
    string s;
    for(;i<=n;i++){
        vector<int> conn;
        vector<pair<int,int>> combine;
        cout<<"enter the node connected with "<<i<<" along with cost edge space : ";
        getline(cin,s);
        istringstream stream1(s);
        string token;
        while(stream1>>token){
            conn.push_back(stoi(token));
        }
        int j;
        for(j=0;j<conn.size();j+=2){
            combine.push_back({conn[j],conn[j+1]});
        }
        graph[i]=combine;
    }
    return graph;

}
int main(){
    cout<<"Shortest Path Find Algorithm Dijkstra"<<endl;
    cout<<"..........................................."<<endl;
    int n;
    cout<<"enter the number of node in graph:";
    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
     unordered_map<int,vector<pair<int,int>>> graph=inputGraph(n);
    for(const auto& x : graph){
        cout<<"Node"<<x.first<<" connected to node(x)  edge(x) "<<endl;
        const vector<pair<int,int> >connected= x.second;
        for(auto y:x.second){
            cout<<y.first<<"  "<<y.second<<endl;
        }
        cout<<endl;
    }
    return 0;
    
}


/*
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

int main() {
    std::string input = "10 20 30 40 50";
    std::istringstream stream(input);
    std::vector<int> numbers;
    std::string token;

    while (stream >> token) {
        numbers.push_back(std::stoi(token));  // Convert token to integer
    }

    // Print integers
    for (const auto& num : numbers) {
        std::cout << num << std::endl;
    }

    return 0;
}
*/