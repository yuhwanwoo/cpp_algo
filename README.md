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

