#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<17/4<<"\n";
    vector<int> vec={1,2,3,4};

    int sum=accumulate(vec.begin(),vec.end(),0);

    cout<<sum;

}