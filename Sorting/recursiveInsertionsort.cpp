#include<bits/stdc++.h>
#define vecout(arr) for(auto x: arr) cout<<x<<" "; cout<<endl;
using namespace std;

void Recsort(int arr[] , int i , int n ){

    if(i==n) return;
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        
            int x=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=x;
            j--;
    }
    Recsort(arr,i+1,n);
}
int main(){
    int arr[]={3,1,3,5,1,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting"<<endl;
    vecout(arr);
    Recsort(arr,0,size);
    cout<<"After sorting"<<endl;
    vecout(arr);
}