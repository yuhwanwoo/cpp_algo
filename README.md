### compare

```c++
bool cmp(pair<string, int> a, pair<string, int> b) {
	return a.second > b.second;
}

sort(v.begin(), v.end(), cmp);
```



### set 출력

```c++
set<string> genre_set;
for(set<string>::iterator it=genre_set.begin();it!=genre_set.end();++it){
       cout<<*it;
    }
```



### vector 합

```c++
vector<int> vec={1,2,3,4};

int sum=accumulate(vec.begin(),vec.end(),0);

cout<<sum;
```



### vector 초기화

```c++
vector<int> v(4); // 크기 4 벡터
vector <int> v(4,0);// v=[0,0,0,0] 
vector < vector <int> > v(10,vector <int>(10)); //v= 10*10
vector < vector <int> > v(10,vector <int>(10,0)); //v= 10*10 그리고 0으로 초기화


int n = 3; // 행 길이 계산
int m = 4; // 열 길이 계산
vector<vector<int> > result(n, vector<int>(m)); // 결과 리스트
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout<<result[i][j];
    }
}
```



### class 선언 하면서 sort() 조건 주기

```c++
class Student{
    public:
        string name;
        int kor;
        int eng;
        int m;
        Student(string name,int kor,int eng,int m){
            this->name=name;
            this->kor=kor;
            this->eng=eng;
            this->m=m;
        }
        /*
        [ 정렬 기준 ]
        1) 두 번째 원소를 기준으로 내림차순 정렬
        2) 두 번째 원소가 같은 경우, 세 번째 원소를 기준으로 오름차순 정렬
        3) 세 번째 원소가 같은 경우, 네 번째 원소를 기준으로 내림차순 정렬
        4) 네 번째 원소가 같은 경우, 첫 번째 원소를 기준으로 오름차순 정렬
        */
       
       bool operator <(Student &other){     //operator라고 써야한대 오버라이드 느낌 <은 <을 내가 정의하는 것
           if (this->kor == other.kor && this->eng == other.eng && this->m == other.m) {
               return this->name < other.name;
            }
            
            if (this->kor == other.kor && this->eng == other.eng) {
                return this->m > other.m;
            }
            
            if (this->kor == other.kor) {
                return this->eng < other.eng;
            }
            
            return this->kor > other.kor;
       }
};

// 이제 main에서 sort하면 operator에 있는 조건으로 정렬됨
```



### vector 안의 pair 정렬

```c++
#include <bits/stdc++.h>

using namespace std;
//compare 만들기
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
```

