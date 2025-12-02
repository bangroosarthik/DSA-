#include<bits/stdc++.h>
using namespace std;
pair<int,int> printMaxMin(int arr[],int n){
    int maxele=INT_MIN;
    int minele=INT_MAX;
    for(int i=0;i<n;i++){
        maxele=max(maxele,arr[i]);
        minele=min(minele,arr[i]);
    }
    return {maxele,minele};
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    //Taking Input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    pair<int,int>ans=printMaxMin(arr,n);
    cout<<"MaxElement is: "<<ans.first<<" , MinElement is: "<<ans.second<<" "<<endl;
}