#include<bits/stdc++.h>
using namespace std;
struct item{
    int profit;
    int weight;
};
bool cmp(pair<int,int> x , pair<int,int> y){
    float ratio1=1.0*x.second/x.first;
    float ratio2=1.0*y.second/y.first;
    return ratio1>ratio2;
}
bool cmp2(item x , item y){
    float ratio1=((float)x.profit)/x.weight;
    float ratio2=y.profit/(float)y.weight;
    return ratio1>ratio2;
}
float maxProfit(vector<pair<int,int>> it, int W){
    float pro=0;
    for(auto x : it){
        if(x.first<=W){
            pro+=x.second;
            W-=x.first;
        }
        else{
            pro+=1.0*W/x.first*x.second;
            break;
        }
    }
    return pro;
}
int main(){
int W,n;
cout<<"KanpSack Problem:"<<endl;
cout<<"Enter the size of KnapSack"<<endl;
cin>>W;
cout<<"enter the number of weights "<<endl;
cin>>n;
// vector<item> it(n);
// for(int i=1;i<=n;i++){
//     cout<<"weight["<<i<<"]=";
//     cin>>it[i-1].weight;
//     cout<<"profit["<<i<<"]=";
//     cin>>it[i-1].profit;
// }

// for(int i=0;i<n;i++){
//     cout<<it[i].profit<<"  "<<it[i].weight<<endl;
// }
// cout<<"----------------------------------------------------------"<<endl;
// sort(it.begin(),it.end(),cmp2);
// for(int i=0;i<n;i++){
//     cout<<it[i].profit<<"  "<<it[i].weight<<endl;
// }
vector<pair<int,int>> it(n);
int i=1;
for(auto &x : it){
    cout<<"weight["<<i<<"]=";
    cin>>x.first;
    cout<<"profit["<<i<<"]=";
    cin>>x.second;
    i++;
}

for(auto t:it){
    cout<<t.first<<"  "<<t.second<<endl;
}
cout<<"----------------------------------------------------------"<<endl;
sort(it.begin(),it.end(),cmp);
for(auto t:it){
    cout<<t.first<<"  "<<t.second<<endl;
}

float maxprofit=maxProfit(it,W);
cout<<"maximu profit="<<maxprofit<<endl;
return 0;
}
