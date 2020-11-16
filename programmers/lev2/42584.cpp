#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for(int i=0;i<prices.size();i++){
        int stand=prices[i];
        int cnt=0;
        for(int j=i+1;j<prices.size();j++){
            if(stand>prices[j]) {
                cnt+=1;
                break;
            }
            else cnt+=1;
        }
        answer.push_back(cnt);
    }
    return answer;
}

int main(){
    vector<int> prices={1,2,3,2,3};
    vector<int> answer;
    answer=solution(prices);

    for(int i=0;i<answer.size();i++){
        cout<<answer[i];
    }

    return 0;
}