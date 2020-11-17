#include <bits/stdc++.h>
using namespace std;

string str;
int sum=0;

int main(){
    cin>>str;
    for(int i=0;i<str.size()/2;i++){
        sum+=str[i]-'0';
    }

    for(int i=str.size()/2;i<str.size();i++){
        sum-=str[i]-'0';
    }

    if(sum==0) cout<<"LUCKY\n";
    else cout<<"READY"<<"\n";
}