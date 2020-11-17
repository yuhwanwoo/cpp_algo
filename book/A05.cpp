#include <bits/stdc++.h>

using namespace std;

int n,m;

int arr[11];

int main(){
    cin>>n>>m;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[x]+=1;
    }

    int result=0;

    for(int i=1;i<=m;i++){
        n-=arr[i];
        cout<<"n:"<<n<<"___i:"<<i<<":::arr[i]:"<<arr[i]<<"\n";
        result+=arr[i]*n;
    }
    cout<<result;
    return 0;
}