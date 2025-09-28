#include<bits/stdc++.h>
using namespace std;
int maxlensumk(vector<int> &arr,int k){
    int ans=0;
    int n=arr.size();
    unordered_map<int,int> presum;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            ans=max(ans,i+1);
        }
        int rem=sum-k;
        if(presum.find(rem) != presum.end()){
            ans=max(ans, i-presum[rem]);
        }
        if(presum.find(sum)==presum.end()){
            presum[sum]=i;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {6,1,2,4,8,7,2,3,1,4};
    int k=5;
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x=maxlensumk(arr,k);
    cout<<x<<endl;
    
}