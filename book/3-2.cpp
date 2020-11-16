#include <bits/stdc++.h>

using namespace std;

int n,m,k;
vector<int> v;

int main(){
    // N,M,K를 공백을 기준으로 구분하여 입력 받기
    cin>>n>>m>>k;

    // N개의 수를 공백을 기준으로 하여 인력 받기
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end()); //입력 받은 수를 정렬하기
    int first=v[n-1]; //가장 큰수
    int second=v[n-2]; //두 번째로 큰수

    // 가장 큰 수가 더해지는 횟수 계산
    int cnt=(m/(k+1))*k;
    cnt+=m%(k+1);

    int result=0;
    result+=cnt*first;
    result+=(m-cnt)*second;

    cout<<result<<'\n'; // 최종 답안출력
}