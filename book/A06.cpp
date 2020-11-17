#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}

int solution(vector<int> food_times,long long k){
    // 전체 음식을 먹는 시간보다 k가 크거나 같다면 -1
    long long summary=0;
    for(int i=0;i<food_times.size();i++){
        summary+=food_times[i];
    }
    if(summary<=k) return -1;

    priority_queue<pair<int,int>> pq;
    for(int i=0;i<food_times.size();i++){
        pq.push({-food_times[i],i+1});
    }

    summary=0; // 먹기 위해 사용한 시간
    long long previous=0; // 직전에 다 먹은 음식 시간
    long long length=food_times.size();

    while(summary+((-pq.top().first-previous)*length)<=k){
        int now=-pq.top().first;
        pq.pop();
        summary+=(now-previous)*length;
        length-=1;
        previous=now;
    }

    vector<pair<int,int>> result;
    while(!pq.empty()){
        int food_time=-pq.top().first;
        int num=pq.top().second;
        pq.pop();
        result.push_back({food_time, num});
    }
    sort(result.begin(),result.end(),compare);
    return result[(k-summary)%length].second;
}

int main(){
    vector<int> food_times={3,1,2};
    int k=5;

    solution(food_times,k);
}