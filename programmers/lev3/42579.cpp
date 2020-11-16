#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string,vector<int>> genres_cnt;
    set<string> genre_set;
    map<int,string> sum_data;
    for(int i=0;i<genres.size();i++){
        genres_cnt[genres[i]].push_back(plays[i]);
    }

    for (int i = 0; i < genres.size(); i++)
    {   
        genre_set.insert(genres[i]);
    }

    for(set<string>::iterator it=genre_set.begin();it!=genre_set.end();++it){
        
        sort(genres_cnt[*it].begin(),genres_cnt[*it].end());
        
    }
    // for (int i = 0; i < genre_set.size(); i++)
    // {
    //     sort(genres_cnt[].begin(),genres_cnt[].end())
    // }
    
    
    return answer;
}

int main(){
    vector<string> genres={"classic", "pop", "classic", "classic", "pop"};
    vector<int> plays={500, 600, 150, 800, 2500};

    solution(genres,plays);
}