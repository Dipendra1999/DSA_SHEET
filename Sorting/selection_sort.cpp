/*
time complexity O(n2) best average worst
*/

#include<bits/stdc++.h>
#define vecout(arr) for(auto x: arr) cout<<x<<" "; cout<<endl;
using namespace std;
void selection_sort(int arr[],int n){
    int mini;
    for(int i=0;i<n-1;i++){
        mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int arr[]={3,1,3,5,1,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting"<<endl;
    vecout(arr);
    selection_sort(arr,size);
    cout<<"After sorting"<<endl;
    vecout(arr);

}