#include <bits/stdc++.h>

using namespace std;
bool compare (pair<string, pair<int, int>> a, pair<string, pair<int, int>> b)
{
    if(a.second.first == b.second.first){ 
        return a.second.second > b.second.second; 
    }else{ 
        return a.second.first > b.second.first;
    }
}

int main(void){
    vector<pair<string, pair<int, int> > > v;
    v.push_back(pair<string, pair<int, int> > ("아이린", make_pair(90, 19910329))); 
    v.push_back(pair<string, pair<int, int> > ("예리", make_pair(98, 19990305))); 
    v.push_back(pair<string, pair<int, int> > ("슬기", make_pair(92, 19940210))); 
    v.push_back(pair<string, pair<int, int> > ("조이", make_pair(94, 19960903))); 
    v.push_back(pair<string, pair<int, int> > ("웬디", make_pair(94, 19940221))); 
    
    sort(v.begin(), v.end(), compare); 
    
    return 0;
}​