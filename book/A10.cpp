#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> rotation_maxrix(vector<vector<int>> a){
    int n=a.size(); // 행 길이 계산
    int m=a[0].size(); // 열 길이 계산
    vector<vector<int>> result(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            result[j][n-i-1]=a[i][j];
        }
    }
    return result;
}

bool check(vector<vector<int>> newlock){
    int lockLength=newlock.size()/3;
    for(int i=lockLength;i<lockLength*2;i++){
        for(int j=lockLength;j<lockLength*2;j++){
            if(newlock[i][j]!=1){
                return false;
            }
        }
    }
    return true;
}

bool solution(vector<vector<int>> key,vector<vector<int>> lock){
    int n=lock.size();
    int m=key.size();
    vector<vector<int>> newlock(n*3,vector<int>(n*3));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            newlock[i+n][j+n]=lock[i][j];
        }
    }

    for(int rotation=0;rotation<4;rotation++){
        key=rotation_maxrix(key);
        for(int x=0;x<n*2;x++){
            for(int y=0;y<n*2;y++){
                //자물소에 열쇠 끼워넣기
                for(int i=0;i<m;i++){
                    for(int j=0;j<m;j++){
                        newlock[x+i][y+j]+=key[i][j];
                    }
                }
                // 새로운 자물쇠에 열쇠가 정확히 들어 맞는지 검사
                if (check(newlock)) return true;
                // 자물쇠에서 다시 빼기
                for(int i=0;i<m;i++){
                    for(int j=0;j<m;j++){
                        newlock[x+i][y+j]-=key[i][j];
                    }
                }
            }
        }
    }
    return false;
}