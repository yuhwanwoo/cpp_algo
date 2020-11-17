#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> arr;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    sort(arr.begin(),arr.end());

    int result=0; // 총 그룹의 수
    int count=0; // 현재 그룹에 포함된 모험가의 수

    for(int i=0;i<n;i++){
        count+=1;
        if(count>=arr[i]){
            result+=1;
            count=0;
        }
    }
}