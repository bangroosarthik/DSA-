#include<bits/stdc++.h>
using namespace std;
void printArr(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



void ReverseArray(vector<int>arr1,int n,int low,int high){
    while(low<=high){
        swap(arr1[low],arr1[high]);
        low++;
        high--;
    }
    printArr(arr1,n);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr1(n);
    vector<int>arr2(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"Reverse Array - "<<endl;
    ReverseArray(arr1,n,0,n-1);

    
    
}