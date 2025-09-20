/*
time complexity O(n2) average worst
O(n) best case
*/

#include<bits/stdc++.h>
#define vecout(arr) for(auto x: arr) cout<<x<<" "; cout<<endl;
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
        
    }
}
int main(){
    int arr[]={3,1,3,5,1,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting"<<endl;
    vecout(arr);
    insertion_sort(arr,size);
    cout<<"After sorting"<<endl;
    vecout(arr);

}