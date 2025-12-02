#include<bits/stdc++.h>
using namespace std;
//Linear Saerch
pair<bool,int> LinearSearch(vector<int>arr,int x){
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x){
            return {true,i};
        }
    }
    return {false,-1};
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to find?"<<endl;
    cin>>x;
    pair<bool,int> ans=LinearSearch(arr,x);
    if(ans.first==true){
        cout<<"Element Found at location "<<ans.second<<endl;
    }
    else{
        cout<<"Element not Found and default location is -1"<<endl;
    }
}